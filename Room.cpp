#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
#include "Room.h"

Room::Room(Room &parent,
           Room &next1,
           Room &next2,
           Character &char1,
           Character &char2,
           int numShield,
           int numPotion)
: _parent(&parent),
_next1(&next1),
_next2(&next2),
_char1(&char1),
_char2(&char2),
_numShield(numShield),
_numPotion(numPotion)
{
}

void Room::printRoomInfo(){
 cout<<_roomDesc<<endl;
 int numVillains = 0;
 if (_char1 != NULL) numVillains++;
 if (_char2 != NULL) numVillains++;
 cout<<"You see "<<numVillains<<" villains here"<<endl;
 if (_numShield){
  cout<<"Aha! There are "<<_numShield<<" Shields here"<<endl;
 }
 if (_numPotion){
  cout<<"Yaay! There are "<<_numPotion<<" Potions here"<<endl;
 }
}

void Room::setRoomDesc(string roomDesc){
 _roomDesc = roomDesc;
}

void Room::pickShield(){
 if (_numShield) _numShield--;
 else cout<<"Error! You can't pick shield"<<endl;
}

int Room::getNumShield(){
 return _numShield;
}

void Room::pickPotion(){
 if (_numPotion) _numPotion--;
 else cout<<"Error! You can't pick potion"<<endl;
}

int Room::getNumPotion(){
 return _numPotion;
} 

char Room::getIsRoomClear(){
 return _isRoomClear;
}

void Room::clearRoom(){
 _isRoomClear = 1;
}

