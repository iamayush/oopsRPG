#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
#include "Hero.h"

int Hero::attack(){
 cout<<"AAAHH!! Repent for your sins!"<<endl;
 return _attackPower;
}

void Hero::setLocation(int location){
 _location = location;
}

int Hero::getLocation(){
 return _location;
}
