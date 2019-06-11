#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
#include "Hero.h"
#include "Swordsman.h"
#include "Room.h"
#include "Map.h"
 
void battle(Character *c1,Character *c2);

Hero hero;

int main(){
 initMap();
 char gameOver = 0;

 hero.setLocation(&room0);
 hero.setName("Wesley");
 hero.setAttackPower(2);
 hero.setHealth(20);
 hero.printStats();
 
 while(!gameOver){ 
  Room &curr = *(hero.getLocation());
  curr.printRoomInfo();

  battle(curr.getChar1(),curr.getChar2());

  cout<<"Do you want to go to room1?"<<endl;
  string userInput;
  cin>>userInput;
  if (userInput == "Y") hero.setLocation(&room1);
  if (&curr == &room1) gameOver = 1;
 }

 return 0;
}

void battle(Character *c1,Character *c2){
 if ((c1 == NULL) && (c2 == NULL)) return;

 

} 
