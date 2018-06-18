#pragma once

#include "MicroGamer.h"

#define DEFAULT_VERT_SPACING 12

class Arduboy2Ext : public MicroGamerBase {

   public:
     Arduboy2Ext();

     uint8_t justPressedButtons() const;

};

