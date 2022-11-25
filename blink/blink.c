/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"

int main()
{
    stdio_init_all();
    gpio_init(25);
    gpio_set_dir(25, GPIO_OUT);

    while (1)
    {
        gpio_put(25, 1);
        printf("LED On !\n");
        sleep_ms(1000);
        gpio_put(25, 0);
        sleep_ms(500);
    }
    // #ifndef PICO_DEFAULT_LED_PIN
    // #warning blink example requires a board with a regular LED
    // #else
    //     const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    //     gpio_init(LED_PIN);
    //     gpio_set_dir(LED_PIN, GPIO_OUT);
    //     while (true)
    //     {
    //         gpio_put(LED_PIN, 1);
    //         sleep_ms(250);
    //         gpio_put(LED_PIN, 0);
    //         sleep_ms(250);
    //     }
    // #endif
}
