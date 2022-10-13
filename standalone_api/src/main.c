/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/zephyr.h>
#include <zephyr/drivers/customperipheral/customperipheral.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>

#define CUSTOMPERIPHERAL_NODE DT_NODELABEL(customperipheral)

void main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);

	static const struct device *customperipheral_dev = DEVICE_DT_GET(CUSTOMPERIPHERAL_NODE);
	
	while(1){
		customperipheral_enable(customperipheral_dev); 
		customperipheral_disable(customperipheral_dev); 
	}
}
