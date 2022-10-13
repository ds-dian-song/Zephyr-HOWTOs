
#define DT_DRV_COMPAT changeme_customperipheral

#include <zephyr/device.h>
#include <devicetree.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/uart.h>
#include <errno.h>


#include <zephyr/logging/log.h>
#include <zephyr/drivers/customperipheral/customperipheral.h>

#define CUSTOMPERIPHERAL_INIT_PRIORITY 91
LOG_MODULE_REGISTER(customperipheral, CONFIG_CUSTOMPERIPHERAL_LOG_LEVEL); 

struct customperipheral_data {
    char a;
    char b;
};

struct customperipheral_config {
    struct gpio_dt_spec enable_gpio;
    struct gpio_dt_spec reset_gpio; 
    const struct device *bus; 
};


static int customperipheral_gpio_set_state(const struct device *dev, bool enabled)
{
    const struct customperipheral_config *config = dev -> config;
    int err; 

    if (config->enable_gpio.port != NULL) {
        err = gpio_pin_set_dt(&config->enable_gpio, enabled ? true : false);
        if (err != 0) {
            LOG_ERR("Failed to set ENABLE GPIO PIN (err %d)", err); 
            return -EIO;
        }
    }

    if (config->reset_gpio.port != NULL) {
        err = gpio_pin_set_dt(&config->reset_gpio, enabled ? true : false);
        if (err != 0) {
            LOG_ERR("Failed to set RESET GPIO PIN (err %d)", err); 
            return -EIO;
        }
    }

    return 0;
}


static int customperipheral_gpio_enable(const struct device *dev)
{
    return customperipheral_gpio_set_state(dev, true); 
}

static int customperipheral_gpio_disable(const struct device *dev)
{
    return customperipheral_gpio_set_state(dev, false); 
}

static int customperipheral_gpio_init(const struct device *dev)
{
    const struct customperipheral_config *config = dev->config;
    int err; 
    if (config->enable_gpio.port != NULL) {
        if(!device_is_ready(config->enable_gpio.port)) {
            LOG_ERR("ENABLE GPIO is not ready");
            return -EINVAL;
        }
        err = gpio_pin_configure_dt(&config->enable_gpio, GPIO_OUTPUT_INACTIVE); 
        if (err != 0) {
            LOG_ERR("Failed to configure ENABLE GPIO (err %d)", err); 
            return err; 
        }
    }

    if (config->reset_gpio.port != NULL) {
        if(!device_is_ready(config->reset_gpio.port)) {
            LOG_ERR("RESET GPIO is not ready");
            return -EINVAL;
        }
        err = gpio_pin_configure_dt(&config->reset_gpio, GPIO_OUTPUT_INACTIVE); 
        if (err != 0) {
            LOG_ERR("Failed to configure RESET GPIO (err %d)", err); 
            return err; 
        }
    }

    return 0;
}

static const struct customperipheral_api api = {
    .enable  = customperipheral_gpio_enable,
    .disable = customperipheral_gpio_disable,
};

#define INIT_CUSTOMPERIPHERAL(inst)                                               \
    static struct customperipheral_data customperipheral_data_##inst = {          \
        .a = 0,                                                                   \
        .b = 0,                                                                   \
    };                                                                            \
    static const struct customperipheral_config customperipheral_config_##inst = {\
        .enable_gpio = GPIO_DT_SPEC_INST_GET(inst, enable_gpios),                 \
        .reset_gpio  = GPIO_DT_SPEC_INST_GET(inst, reset_gpios),                  \
        .bus         = DEVICE_DT_GET(DT_INST_BUS(inst)),                          \
    };                                                                            \
    DEVICE_DT_INST_DEFINE(inst,                                                   \
                        customperipheral_gpio_init,                               \
                        NULL,                                                     \
                        &customperipheral_data_##inst,                            \
                        &customperipheral_config_##inst,                          \
                        POST_KERNEL,                                              \
                        CUSTOMPERIPHERAL_INIT_PRIORITY,                           \
                        &api);

DT_INST_FOREACH_STATUS_OKAY(INIT_CUSTOMPERIPHERAL)
