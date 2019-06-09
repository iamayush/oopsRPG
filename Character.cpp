#include <iostream>
#include <string>
using namespace std;

#include "Character.h"

void Character::setName(string name){
 _name = name;
}

void Character::setAttackPower(int attackPower){
 _attackPower = attackPower;
}

void Character::setHealth(int health){
 _health = health;
}

int Character::getHealth(){
 return _health;
}

void Character::printStats(){
 cout<<"Name: "<<_name<<endl
     <<"Health: "<<_health<<endl
     <<"Attack Power: "<<_attackPower<<endl;
}
