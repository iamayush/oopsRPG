#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
#include "Hero.h"
#include "Room.h"

int Hero::attack(){
 cout<<"AAAHH!! Repent for your sins!"<<endl;
 return _attackPower;
}

void Hero::setLocation(Room *location){
 _location = location;
}

Room* Hero::getLocation(){
 return _location;
}
