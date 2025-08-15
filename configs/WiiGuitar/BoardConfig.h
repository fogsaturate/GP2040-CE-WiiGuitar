/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "WiiGuitar"

#define DEFAULT_INPUT_MODE_B1 INPUT_MODE_XINPUT
#define DEFAULT_INPUT_MODE_B2 INPUT_MODE_KEYBOARD
#define DEFAULT_INPUT_MODE_B4 INPUT_MODE_SWITCH
#define DEFAULT_INPUT_MODE_B3 -1
#define DEFAULT_INPUT_MODE_R2 -1


// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_00 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_22 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_19 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_S1     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ENTER         // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_SHIFT_RIGHT   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_NONE          // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_NONE          // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_1             // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_2             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_NONE          // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_NONE          // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_4             // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_3             // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_NONE          // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_5             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_PAGE_DOWN     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_ESCAPE        // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_NONE          // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_NONE          // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_NONE          // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_NONE          // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#define HOTKEY_01_AUX_MASK 0
#define HOTKEY_01_BUTTONS_MASK 768 // Back+Start
#define HOTKEY_01_DPAD_MASK 0
#define HOTKEY_01_ACTION 4         // Home

#define HOTKEY_02_AUX_MASK 0
#define HOTKEY_02_BUTTONS_MASK 0 
#define HOTKEY_02_DPAD_MASK 0     
#define HOTKEY_02_ACTION 0  

#define HOTKEY_03_AUX_MASK 0
#define HOTKEY_03_BUTTONS_MASK 0 
#define HOTKEY_03_DPAD_MASK 0 
#define HOTKEY_03_ACTION 0 

#define HOTKEY_04_AUX_MASK 0
#define HOTKEY_04_BUTTONS_MASK 0
#define HOTKEY_04_DPAD_MASK 0
#define HOTKEY_04_ACTION 0

#define HOTKEY_05_AUX_MASK 0
#define HOTKEY_05_BUTTONS_MASK 0
#define HOTKEY_05_DPAD_MASK 0
#define HOTKEY_05_ACTION 0

#define HOTKEY_06_AUX_MASK 0
#define HOTKEY_06_BUTTONS_MASK 0
#define HOTKEY_06_DPAD_MASK 0
#define HOTKEY_06_ACTION 0

#define HOTKEY_07_AUX_MASK 0
#define HOTKEY_07_BUTTONS_MASK 0
#define HOTKEY_07_DPAD_MASK 0
#define HOTKEY_07_ACTION 0

// Setting GPIO pins to assigned by add-on
//
#define GPIO_PIN_26 GpioAction::ASSIGNED_TO_ADDON

// Analog Configuration
//
#define ANALOG_INPUT_ENABLED        1
#define ANALOG_ADC_1_VRX            -1
#define ANALOG_ADC_1_VRY            -1
#define ANALOG_ADC_1_MODE           DPAD_MODE_LEFT_ANALOG
#define ANALOG_ADC_1_INVERT         INVERT_NONE
#define ANALOG_ADC_2_VRX            26
#define ANALOG_ADC_2_VRY            -1
#define ANALOG_ADC_2_MODE           DPAD_MODE_RIGHT_ANALOG
#define ANALOG_ADC_2_INVERT         INVERT_NONE
#define FORCED_CIRCULARITY2_ENABLED 0
#define DEFAULT_INNER_DEADZONE2     5
#define DEFAULT_OUTER_DEADZONE2     60
#define AUTO_CALIBRATE2_ENABLED     1

#define DEFAULT_DEBOUNCE_DELAY 2

#endif