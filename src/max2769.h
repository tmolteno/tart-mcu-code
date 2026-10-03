#pragma once

// Max2769_handler
#include "hardware.h"

void max2769set(GPIO_TypeDef *cs_port, pin_t cs_pin,
                uint8_t addr,
                uint32_t data);

void setupRadio(GPIO_TypeDef* cs_port, pin_t cs_pin);
void setupRadioStream(GPIO_TypeDef *cs_port, pin_t cs_pin);

void shutdownRadio(void);
void enableRadio(void);
