
 
#include "Arduino.h"
#include "IntKompressor.h"






    
    void Kompress::read(int raw){
      _raw = raw;
    }
    byte Kompress::getFirst(){
      return(_raw >> 8);
    }
    byte Kompress::getSecond(){
      return(_raw & 0b0000000011111111);
    }
    int Kompress::Merge(byte first, byte second){
      int VAL = first <<8 | second;
      return(VAL);
    }


  