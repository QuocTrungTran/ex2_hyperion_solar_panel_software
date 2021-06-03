/*
 * hyperion.c
 *
 *  Created on: May 26, 2021
 *      Author: tttru
 */
#include "hyperion.h"


/**
 * @brief
 * 		Get the data from a panel and its corresponding channel
 * @details
 * 		Temperature, photodiodes, voltage, and current values of a panel can be obtained via this function 
 *      Refer to Hyperion Detailed Design document
 * @attention
 * 		This function is only used for config 1, which includes Port, Port Deployable, Starboard, Startboard Deployable and Zenith
 * @param panel
 * 		The panel that we want to retrieve data from 
 * @param channel
 * 		voltage channel corresponding to that panel
 * @param temp
 * 		The temperature in celcius
 * @param pd
 *      
 * @param voltage
 *      The voltage in mV
 * @param current
 *      The current in mA
 * @return
 * 		void
 */
//void config_1_value(config_1_panel_t panel, config_1_channel_type_t channel, float* temp, float* pd, float* voltage, float* current) {
//    unsigned short data = 0;
//    unsigned char ch = 0; // channel
//    int slave_addr = 0;
//
//    switch (panel)
//    {
//    case CONFIG_1_PANEL_P:
//        slave_addr = PANEL_SLAVE_ADDR_PORT;
//        break;
//
//    case CONFIG_1_PANEL_PD:
//        slave_addr = PANEL_SLAVE_ADDR_PORT_DEPLOYABLE;
//        break;
//
//    case CONFIG_1_PANEL_S:
//        slave_addr = PANEL_SLAVE_ADDR_STARBOARD;
//        break;
//
//    case CONFIG_1_PANEL_SD:
//        slave_addr = PANEL_SLAVE_ADDR_STARTBOARD_DEPLOYABLE;
//        break;
//
//    case CONFIG_1_PANEL_Z:
//        slave_addr = PANEL_SLAVE_ADDR_ZENITH;
//        break;
//
//    default:
//        break;
//    }
//
//
//    switch (channel)
//    {
//    /* Channel 1 to 3 handle temp sensor */
//    case CONFIG_1_CHANNEL_TEMP_1:
//        adc_init(slave_addr, 1 << 7);
//        adc_get_raw(slave_addr, &data, &ch);
//        *temp = adc_calculate_sensor_temp(&data, ADC_VREF);
//        break;
//
//    case CONFIG_1_CHANNEL_TEMP_2:
//        adc_init(slave_addr, 1 << 6);
//        adc_get_raw(slave_addr, &data, &ch);
//        *temp = adc_calculate_sensor_temp(&data, ADC_VREF);
//        break;
//
//    case CONFIG_1_CHANNEL_TEMP_3:
//        adc_init(slave_addr, 1 << 5);
//        adc_get_raw(slave_addr, &data, &ch);
//        *temp = adc_calculate_sensor_temp(&data, ADC_VREF);
//        break;
//
//    case CONFIG_1_CHANNEL_PD_1:
//        adc_init(slave_addr, 1 << 4);
//        adc_get_raw(slave_addr, &data, &ch);
//        *pd = adc_calculate_sensor_pd(&data, ADC_VREF);
//        break;
//
//    case CONFIG_1_CHANNEL_PD_2:
//        adc_init(slave_addr, 1 << 3);
//        adc_get_raw(slave_addr, &data, &ch);
//        *pd = adc_calculate_sensor_pd(&data, ADC_VREF);
//        break;
//
//    case CONFIG_1_CHANNEL_PD_3:
//        adc_init(slave_addr, 1 << 2);
//        adc_get_raw(slave_addr, &data, &ch);
//        *pd = adc_calculate_sensor_pd(&data, ADC_VREF);
//        break;
//
//    case CONFIG_1_CHANNEL_VOLT:
//        adc_init(slave_addr, 1 << 1);
//        adc_get_raw(slave_addr, &data, &ch);
//        *voltage = adc_calculate_sensor_voltage(&data, ADC_VREF);
//        break;
//
//    case CONFIG_1_CHANNEL_CURR:
//        adc_init(slave_addr, 1 << 1);
//        adc_get_raw(slave_addr, &data, &ch);
//        *current = adc_calculate_sensor_current(&data, ADC_VREF);
//        break;
//
//    default:
//        break;
//    }
//}


//void config_2_value(config_2_panel_t panel, config_2_channel_type_t channel, float* temp, float* pd) {
//    unsigned short data = 0;
//    unsigned char ch = 0; // channel
//    int slave_addr = 0;
//
//    switch (panel)
//    {
//    case CONFIG_2_PANEL_ARKE:
//        slave_addr = PANEL_SLAVE_ADDR_ARKE;
//        break;
//
//    case CONFIG_2_PANEL_NADIR:
//        slave_addr = PANEL_SLAVE_ADDR_NADIR;
//        break;
//
//    case CONFIG_2_PANEL_NADIR2U:
//        slave_addr = PANEL_SLAVE_ADDR_NADIR2U;
//        break;
//
//    default:
//        break;
//    }
//
//    switch (channel)
//    {
//    case CONFIG_2_CHANNEL_TEMP_1:
//        adc_init(slave_addr, 1 << 7);
//        adc_get_raw(slave_addr, &data, &ch);
//        *temp = adc_calculate_sensor_temp(&data, ADC_VREF);
//        break;
//
//    case CONFIG_2_CHANNEL_PD_1:
//        adc_init(slave_addr, 1 << 6);
//        adc_get_raw(slave_addr, &data, &ch);
//        *pd = adc_calculate_sensor_pd(&data, ADC_VREF);
//        break;
//
//    default:
//        break;
//    }
//}

// void config_3_value(config_3_panel_t panel, config_3_channel_type_t channel, float* temp, float* pd, float* voltage, float* current) {

// }
