#include "Arduboy2Ext.h"

Arduboy2Ext::Arduboy2Ext() : MicroGamerBase() { }

uint8_t Arduboy2Ext::justPressedButtons() const {

  return (~previousButtonState & currentButtonState);

}



