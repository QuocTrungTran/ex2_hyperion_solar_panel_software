/*
 * hyperion.h
 *
 *  Created on: May 26, 2021
 *      Author: tttru
 */

#ifndef EX2_HAL_EX2_HYPERION_SOLAR_PANEL_SOFTWARE_HARDWARE_INTERFACE_INCLUDE_HYPERION_H_
#define EX2_HAL_EX2_HYPERION_SOLAR_PANEL_SOFTWARE_HARDWARE_INTERFACE_INCLUDE_HYPERION_H_

#include <ex2_hal/ex2_hyperion_solar_panel_software/equipment_handler/include/adc_handler.h>

void hyperion_config_1_value(config_1_panel_t panel, config_1_channel_type_t channel, float* temp, float* pd, float* voltage, float* current);
void hyperion_config_2_value(config_2_panel_t panel, config_2_channel_type_t channel, float* temp, float* pd);
void hyperion_config_3_value(config_3_panel_t panel, config_3_channel_type_t channel, float* temp, float* pd, float* voltage, float* current);
#endif /* EX2_HAL_EX2_HYPERION_SOLAR_PANEL_SOFTWARE_HARDWARE_INTERFACE_INCLUDE_HYPERION_H_ */
