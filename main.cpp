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
  hero.printStats();
  if (curr.getChar1() != NULL) curr.getChar1()->printStats();
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

 char battleOver = 0;
 while(!battleOver){
  int hero_attack = hero.attack();
  int attackChoice;
  int damage;
  if ((c1!=NULL)&&(c2!=NULL)){
   cout<<"Attack 1 or 2?"<<endl;
   cin>>attackChoice;
   damage = c1->attack() + c2->attack();
  }
  else if ((c1==NULL)&&(c2!=NULL)){
   attackChoice = 2;
   damage = c2->attack();
  }
  else if ((c1!=NULL)&&(c2==NULL)){
   attackChoice = 1;
   damage = c1->attack();
  }
  else {
   battleOver = 1;
   return;
  }

  if (damage < hero.getHealth()){ 
   hero.setHealth(hero.getHealth()-damage);
  }
  else{
   hero.setHealth(0);
   battleOver = 1;
  }

  if (attackChoice == 1){
   if (hero_attack < c1->getHealth()){ 
    c1->setHealth(c1->getHealth()-damage);
   }
   else{
    c1->setHealth(0);
    c1 = NULL;
   }
  }

  
  if (attackChoice == 2){
   if (hero_attack < c2->getHealth()){ 
    c2->setHealth(c2->getHealth()-damage);
   }
   else{
    c2->setHealth(0);
    c2 = NULL;
   }
  }
 } 

} 
