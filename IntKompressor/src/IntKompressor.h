

#ifndef IntKompressor
#define IntKompressor 

#include "arduino.h"

class Kompress{
public:
  void read(int raw);
  byte getSecond();
  byte getFirst();
  int  Merge(byte first, byte second);
  int  _raw;

};

#endif