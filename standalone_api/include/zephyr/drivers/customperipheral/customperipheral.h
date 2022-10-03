#include <zephyr.h>
#include <device.h>

#ifndef __APP_DRIVERS_CUSTOMPERIPHERAL_CUSTOMPERIPHERAL_H__
#define __APP_DRIVERS_CUSTOMPERIPHERAL_CUSTOMPERIPHERAL_H__

typedef int (*customperipheral_enable_t)(const struct device *dev);
typedef int (*customperipheral_disable_t)(const struct device *dev);

__subsystem struct customperipheral_api {
    customperipheral_disable_t enable;
    customperipheral_disable_t disable;
};

__syscall int customperipheral_enable(const struct device *dev);

static inline int z_impl_customperipheral_enable(const struct device *dev)
{
	const struct customperipheral_api *api =
		(const struct customperipheral_api *)dev->api;

	return api->enable(dev);
}

__syscall int customperipheral_disable(const struct device *dev);
static inline int z_impl_customperipheral_disable(const struct device *dev)
{
	const struct customperipheral_api *api =
		(const struct customperipheral_api *)dev->api;

	return api->disable(dev);
}


#include <syscalls/customperipheral.h>

#endif //__APP_DRIVERS_CUSTOMPERIPHERAL_CUSTOMPERIPHERAL_H__