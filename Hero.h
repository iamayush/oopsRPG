#ifndef HERO_H
#define HERO_H

#include "Room.h"
#include "Character.h"

class Hero: public Character{
 public:
  int attack();
  void setLocation(Room *location);
  Room* getLocation();
 private:
  int _numPotions; 
  Room *_location;
};
#endif
