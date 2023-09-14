#include <stdio.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/adc.h"
#include "driver/ledc.h"
#include "pwm_app.h"

#define SAMPLE_CNT 64
adc1_channel_t adc_channel = ADC_CHANNEL_4;
#define LEDC_GPIO 15
#define TIME_RES 1000
#define SAMPLE 128

void app_main()
{
    init_hw(adc_channel,LEDC_GPIO);
    pwm_change(TIME_RES,SAMPLE,adc_channel);
}