#ifndef __PWM_APP_H
#define __PWM_APP_H
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/adc.h"
#include "driver/ledc.h"
#include "pwm_app.h"

void init_hw(adc1_channel_t adc_channel,gpio_num_t LEDC_GPIO);
void pwm_change(int times_res,int SAMPLE, adc1_channel_t adc_channel);

#endif