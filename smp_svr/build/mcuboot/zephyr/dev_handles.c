#include <device.h>
#include <toolchain.h>

/* 1 : /soc/clock@40000000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_clock_40000000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 2 : /soc/gpio@50000000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - (/buttons/button_1)
 *   - (/buttons/button_2)
 *   - (/buttons/button_3)
 *   - (/buttons/button_4)
 *   - (/leds/led_1)
 *   - (/leds/led_2)
 *   - (/leds/led_3)
 *   - (/leds/led_4)
 *   - /soc/spi@40004000
 *   - /soc/spi@40004000/w25q128jvsiq@0
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_50000000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 6, 7, DEVICE_HANDLE_ENDS };

/* 3 : /soc/gpio@50000300:
 * Direct Dependencies:
 *   - (/soc)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_50000300[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/uart@40002000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/pin-controller/uart0_default)
 *   - (/pin-controller/uart0_sleep)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_uart_40002000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/flash-controller@4001e000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - (/soc/flash-controller@4001e000/flash@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_flash_controller_4001e000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/spi@40004000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/pin-controller/spi1_default)
 *   - (/pin-controller/spi1_sleep)
 *   - /soc/gpio@50000000
 *   - (/soc/interrupt-controller@e000e100)
 * Supported:
 *   - /soc/spi@40004000/w25q128jvsiq@0
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_spi_40004000[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 7, DEVICE_HANDLE_ENDS };

/* 7 : /soc/spi@40004000/w25q128jvsiq@0:
 * Direct Dependencies:
 *   - /soc/gpio@50000000
 *   - /soc/spi@40004000
 * Supported:
 *   - (/soc/spi@40004000/w25q128jvsiq@0/partitions)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_spi_40004000_S_w25q128jvsiq_0[] = { 6, 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /soc/temp@4000c000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_temp_4000c000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };