// Pins.h
#pragma once

// Shared SPI bus: TFT + nRF24 #1 + nRF24 #2
#define SCK_PIN   18
#define MOSI_PIN  23
#define MISO_PIN  19

// nRF24 #1
#define NRF1_CE_PIN   27
#define NRF1_CSN_PIN  14

// nRF24 #2
#define NRF2_CE_PIN   17
#define NRF2_CSN_PIN  16

// Backwards-compatible aliases. Existing scanner code uses CE_PIN/CSN_PIN.
#define CE_PIN   NRF1_CE_PIN
#define CSN_PIN  NRF1_CSN_PIN

// TFT SPI display
#define TFT_CS_PIN   5
#define TFT_RST_PIN  4
#define TFT_DC_PIN   22
#define TFT_LED_PIN  13

// Buttons, wired to GND when pressed
#define BTN_UP    32
#define BTN_OK    33
#define BTN_DOWN  25

// No buzzer pin was assigned in this wiring. GPIO 22 is TFT DC and GPIO 13 is
// TFT LED, so sound is disabled unless a free GPIO is assigned here later.
#define BUZZER_PIN -1
