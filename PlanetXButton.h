#ifndef _PLANETXBUTTON_H_
#define _PLANETXBUTTON_H_

#include "RJPins.h"
#include "Button.h"

enum PlanetXButtonID {
  C,
  D
};

class PlanetXButton
{
public:
  PlanetXButton(RJPin pin);
  bool isPressed(PlanetXButtonID id);
  bool wasPressed(PlanetXButtonID id);
  bool isOddPressed(PlanetXButtonID id);

private:
  Button *buttonC;
  Button *buttonD;
};

#endif
