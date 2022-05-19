/**
 * a button library.
 */

#ifndef _BUTTON_H_
#define _BUTTON_H_

#include <Arduino.h>

class Button
{
public:
  Button(uint8_t pin);
  bool isPressed();
  bool wasPressed();
  bool isOddPressed();

private:
  uint8_t _pin;
  bool _oldPressed;
  bool _oddPressedFlag;
  bool _oddPressed;
};

#endif
