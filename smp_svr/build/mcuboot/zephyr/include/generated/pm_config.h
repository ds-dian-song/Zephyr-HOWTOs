/* File generated by C:/Users/SongDian/ncs2/v2.0.2/nrf/scripts/partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM_MCUBOOT_OFFSET 0x0
#define PM_MCUBOOT_ADDRESS 0x0
#define PM_MCUBOOT_END_ADDRESS 0x10000
#define PM_MCUBOOT_SIZE 0x10000
#define PM_MCUBOOT_NAME mcuboot
#define PM_MCUBOOT_ID 0
#define PM_mcuboot_ID PM_MCUBOOT_ID
#define PM_mcuboot_IS_ENABLED 1
#define PM_0_LABEL MCUBOOT
#define PM_MCUBOOT_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_MCUBOOT_SECONDARY_OFFSET 0x0
#define PM_MCUBOOT_SECONDARY_ADDRESS 0x0
#define PM_MCUBOOT_SECONDARY_END_ADDRESS 0x4c000
#define PM_MCUBOOT_SECONDARY_SIZE 0x4c000
#define PM_MCUBOOT_SECONDARY_NAME mcuboot_secondary
#define PM_MCUBOOT_SECONDARY_ID 1
#define PM_mcuboot_secondary_ID PM_MCUBOOT_SECONDARY_ID
#define PM_mcuboot_secondary_IS_ENABLED 1
#define PM_1_LABEL MCUBOOT_SECONDARY
#define PM_MCUBOOT_SECONDARY_DEV_NAME "W25Q128"
#define PM_MCUBOOT_PAD_OFFSET 0x10000
#define PM_MCUBOOT_PAD_ADDRESS 0x10000
#define PM_MCUBOOT_PAD_END_ADDRESS 0x10200
#define PM_MCUBOOT_PAD_SIZE 0x200
#define PM_MCUBOOT_PAD_NAME mcuboot_pad
#define PM_MCUBOOT_PAD_ID 2
#define PM_mcuboot_pad_ID PM_MCUBOOT_PAD_ID
#define PM_mcuboot_pad_IS_ENABLED 1
#define PM_2_LABEL MCUBOOT_PAD
#define PM_MCUBOOT_PAD_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_MCUBOOT_PRIMARY_OFFSET 0x10000
#define PM_MCUBOOT_PRIMARY_ADDRESS 0x10000
#define PM_MCUBOOT_PRIMARY_END_ADDRESS 0x5c000
#define PM_MCUBOOT_PRIMARY_SIZE 0x4c000
#define PM_MCUBOOT_PRIMARY_NAME mcuboot_primary
#define PM_MCUBOOT_PRIMARY_ID 3
#define PM_mcuboot_primary_ID PM_MCUBOOT_PRIMARY_ID
#define PM_mcuboot_primary_IS_ENABLED 1
#define PM_3_LABEL MCUBOOT_PRIMARY
#define PM_MCUBOOT_PRIMARY_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_APP_OFFSET 0x10200
#define PM_APP_ADDRESS 0x10200
#define PM_APP_END_ADDRESS 0x5c000
#define PM_APP_SIZE 0x4be00
#define PM_APP_NAME app
#define PM_APP_ID 4
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_4_LABEL APP
#define PM_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_MCUBOOT_PRIMARY_APP_OFFSET 0x10200
#define PM_MCUBOOT_PRIMARY_APP_ADDRESS 0x10200
#define PM_MCUBOOT_PRIMARY_APP_END_ADDRESS 0x5c000
#define PM_MCUBOOT_PRIMARY_APP_SIZE 0x4be00
#define PM_MCUBOOT_PRIMARY_APP_NAME mcuboot_primary_app
#define PM_MCUBOOT_PRIMARY_APP_ID 5
#define PM_mcuboot_primary_app_ID PM_MCUBOOT_PRIMARY_APP_ID
#define PM_mcuboot_primary_app_IS_ENABLED 1
#define PM_5_LABEL MCUBOOT_PRIMARY_APP
#define PM_MCUBOOT_PRIMARY_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_EXTERNAL_FLASH_OFFSET 0x4c000
#define PM_EXTERNAL_FLASH_ADDRESS 0x4c000
#define PM_EXTERNAL_FLASH_END_ADDRESS 0x1000000
#define PM_EXTERNAL_FLASH_SIZE 0xfb4000
#define PM_EXTERNAL_FLASH_NAME external_flash
#define PM_EXTERNAL_FLASH_ID 6
#define PM_external_flash_ID PM_EXTERNAL_FLASH_ID
#define PM_external_flash_IS_ENABLED 1
#define PM_6_LABEL EXTERNAL_FLASH
#define PM_EXTERNAL_FLASH_DEV_NAME "W25Q128"
#define PM_MCUBOOT_SCRATCH_OFFSET 0x5c000
#define PM_MCUBOOT_SCRATCH_ADDRESS 0x5c000
#define PM_MCUBOOT_SCRATCH_END_ADDRESS 0x7a000
#define PM_MCUBOOT_SCRATCH_SIZE 0x1e000
#define PM_MCUBOOT_SCRATCH_NAME mcuboot_scratch
#define PM_MCUBOOT_SCRATCH_ID 7
#define PM_mcuboot_scratch_ID PM_MCUBOOT_SCRATCH_ID
#define PM_mcuboot_scratch_IS_ENABLED 1
#define PM_7_LABEL MCUBOOT_SCRATCH
#define PM_MCUBOOT_SCRATCH_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_LITTLEFS_STORAGE_OFFSET 0x7a000
#define PM_LITTLEFS_STORAGE_ADDRESS 0x7a000
#define PM_LITTLEFS_STORAGE_END_ADDRESS 0x80000
#define PM_LITTLEFS_STORAGE_SIZE 0x6000
#define PM_LITTLEFS_STORAGE_NAME littlefs_storage
#define PM_LITTLEFS_STORAGE_ID 8
#define PM_littlefs_storage_ID PM_LITTLEFS_STORAGE_ID
#define PM_littlefs_storage_IS_ENABLED 1
#define PM_8_LABEL LITTLEFS_STORAGE
#define PM_LITTLEFS_STORAGE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_SRAM_PRIMARY_OFFSET 0x0
#define PM_SRAM_PRIMARY_ADDRESS 0x20000000
#define PM_SRAM_PRIMARY_END_ADDRESS 0x20020000
#define PM_SRAM_PRIMARY_SIZE 0x20000
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 9
#define PM_ALL_BY_SIZE "mcuboot_pad littlefs_storage mcuboot mcuboot_scratch sram_primary app mcuboot_primary_app mcuboot_secondary mcuboot_primary external_flash"
#define PM_ADDRESS 0x0
#define PM_SIZE 0x10000
#define PM_SRAM_ADDRESS 0x20000000
#define PM_SRAM_SIZE 0x20000
#endif /* PM_CONFIG_H__ */