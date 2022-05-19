/**
 * a button library.
 */

#include "Button.h"

Button::Button(uint8_t pin)
{
  _pin = pin;
  _oldPressed = false;
  _oddPressedFlag = false;
  _oddPressed = false;

  pinMode(_pin, INPUT);
}

bool Button::isPressed()
{
  return digitalRead(_pin);
}

bool Button::wasPressed()
{
  bool buttonPressed = digitalRead(_pin);

  if (buttonPressed)
  {
    _oldPressed = true;
  }

  if (!buttonPressed && _oldPressed)
  {
    _oldPressed = false;
    return true;
  }

  return false;
}

bool Button::isOddPressed()
{
  bool buttonPressed = digitalRead(_pin);

  if (buttonPressed)
  {
    _oddPressedFlag = true;
  }

  if (!buttonPressed && _oddPressedFlag)
  {
    _oddPressedFlag = false;
    _oddPressed = !_oddPressed;
  }

  return _oddPressed;
}
