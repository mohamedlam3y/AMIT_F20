/*
* UART.h
*
* Created: 2/13/2021 9:11:03 PM
*  Author: karim
*/


#ifndef UART_H_
#define UART_H_

#include "UART_CONFIG.h"

void UART_Init(void);
void UART_Transmit(uint8_t data);
uint8_t UART_Receive(void);
void uart_init(void);

#endif /* UART_H_ */