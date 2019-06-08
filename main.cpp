#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
#include "Hero.h"

int main(){
 Hero hero;
 hero.setName("Wesley");
 hero.setAttackPower(2);
 hero.setHealth(20);
 hero.printStats();
 hero.attack();
 return 0;
}
