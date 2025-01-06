#include <stdio.h>
#include <stdint.h>
#include "driver/gpio.h"

void init_gpio_blink();

void increment_time_interupt();

uint32_t time_sec = 0; // seconds from 12:00am

void app_main(void)
{
    // Idle State
    // Loading new time
    

}

void increment_time_interupt() 
{
    time_sec = (time_sec < 60*60*24) ? time_sec+1 : 0;
}

void init_gpio_blink()
{
    gpio_config_t config = {
        .pin_bit_mask = 4, // set to on board LED 
        .mode = GPIO_MODE_OUTPUT,
    };
}