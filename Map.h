#ifndef MAP_H
#define MAP_H
#include "Room.h"
#include "Character.h"
#include "Swordsman.h"

Swordsman s1_room1;

Room room0(NULL,NULL,0,0);
Room room1(&s1_room1,NULL,0,0);
Room room2(NULL,NULL,0,0);

void initMap(){

 s1_room1.setName("Spencer the Fencer");
 s1_room1.setHealth(10);
 s1_room1.setAttackPower(2);
 room0.setNeighbors(&room0,&room1,&room2);
 room0.setRoomDesc("Welcome to the game! Choose a door- 1 or 2?");

 room1.setNeighbors(&room0,NULL,NULL);
 room1.setRoomDesc("GOtcha!");

 room2.setNeighbors(&room0,NULL,NULL);
 room2.setRoomDesc("Nothing here yet");
}
#endif
