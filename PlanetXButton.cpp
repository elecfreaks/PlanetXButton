#include "PlanetXButton.h"

PlanetXButton::PlanetXButton(RJPin pin)
{
  buttonC = new Button(pins[pin][0]);
  buttonD = new Button(pins[pin][1]);
}

bool PlanetXButton::isPressed(PlanetXButtonID id)
{
  switch (id)
  {
    case C:
      return !buttonC->isPressed();
    case D:
      return !buttonD->isPressed();
  }
}

bool PlanetXButton::wasPressed(PlanetXButtonID id)
{
  switch (id)
  {
    case C:
      return buttonC->wasPressed();
    case D:
      return buttonD->wasPressed();
  }
}

bool PlanetXButton::isOddPressed(PlanetXButtonID id)
{
  switch (id)
  {
    case C:
      return buttonC->isOddPressed();
    case D:
      return buttonD->isOddPressed();
  }
}
