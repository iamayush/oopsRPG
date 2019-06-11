#ifndef MAP_H
#define MAP_H
#include "Room.h"
#include "Character.h"
#include "Swordsman.h"

Swordsman s1_room1;

Room room0(NULL,NULL,0,0);
Room room1(&s1_room1,NULL,0,0);
Room room2(NULL,NULL,0,0);

#endif
