/*
 * SPDX-FileCopyrightText: 2025 Yu Fan and Qixuan Qin
 * SPDX-License-Identifier: MIT
 */

#ifndef __CALLBACK_H
#define __CALLBACK_H

#include "main.h"
#include "stm32f1xx_hal_tim.h"
#include "tim.h"
#include "uart.h"

void oled_show(void);
void uart_show(void);

#endif // __CALLBACK_H
