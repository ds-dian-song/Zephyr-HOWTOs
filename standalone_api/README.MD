
# Driver Hello World
Find and replace 
## General Notes
- Take special notes on how `CMakeLists.txt` and `Kconfig` are written on each folder level.


## Some Takeaways
- "Undefined references to device-dts-ord" is highly likely a CMake issue, given that the driver boilerplate is written correctly. 
- Read `[SDK]/zephyr/cmake/modules/extensions.cmake` would to learn more about how many `CMakeLists.txt` functions/macros are defined.
- The mysterious `compatible = "vendor,modelnumber"` needs to show up in three places: 1. device node description from project devicetree or project `.overlay` file 2. project `dts/bindings/vendor,modelnumber.yaml` 3.  Somewhere (by convention, top) of the source `.c` file in which `DEVICE_DT_INST_DEFINE()` is called.
- adding `zephyr/module.yaml` will result in a new module showing up in `build/modules/`

## References 
- [Documentation: Device Driver Model](https://docs.zephyrproject.org/3.1.0/kernel/drivers/index.html)
- [Documentation: Troubleshooting Devicetree](https://docs.zephyrproject.org/3.1.0/build/dts/troubleshooting.html)
- [Documentation: Application Development](https://docs.zephyrproject.org/3.1.0/develop/application/index.html)
- [Github Issue: undefined reference to `__device_dts_ord_xx'](https://github.com/zephyrproject-rtos/zephyr/issues/41677)
- [Source Code: `zephyr/scripts/zephyr_module.py`](https://github.com/zephyrproject-rtos/zephyr/blob/main/scripts/zephyr_module.py)
- [Source Code: `zephyr/cmake/modules/extensions.cmake`](https://github.com/zephyrproject-rtos/zephyr/blob/main/cmake/modules/extensions.cmake)
