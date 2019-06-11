#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
#include "Hero.h"
#include "Swordsman.h"
#include "Room.h"
#include "Map.h"
 
int main(){
 Hero hero;
 Swordsman s1;
 hero.setName("Wesley");
 hero.setAttackPower(2);
 hero.setHealth(20);
 hero.printStats();
 s1_room1.setName("Spencer the Fencer");
 s1_room1.setHealth(10);
 s1_room1.setAttackPower(2);
 room0.setNeighbors(&room0,&room1,&room2);
 room0.setRoomDesc("Welcome to the game! Choose a door- 1 or 2?");

 room1.setNeighbors(&room0,NULL,NULL);
 room1.setRoomDesc("GOtcha!");

 room2.setNeighbors(&room0,NULL,NULL);
 room2.setRoomDesc("Nothing here yet");

 cout<<"Hero is in room "<<hero.getLocation()<<endl;
 while(hero.getLocation() != 99){
  switch(hero.getLocation()){
   case 0:
    room0.printRoomInfo();
    hero.setLocation(1);
    break;

   case 1:
    room1.printRoomInfo();
    hero.setLocation(99);
    break;
  }
 }
/* // hero.attack();
 // s1.attack();
 s1.setName("Fencer");
 s1.setHealth(8);

 // battle 
 while(1){
  cout<<"Hero"<<endl;
  hero.printStats();
  cout<<"Swordsman"<<endl;
  s1.printStats();

  cout<<"attack?"<<endl;
  string userMove;
  cin>>userMove;

  if (userMove =="Y"){
   s1.setHealth(s1.getHealth()-hero.attack());
  }

  if (s1.getHealth() <= 0){
   cout<<"I slayed you puny swordsman!"<<endl;
   s1.setHealth(0);
   break;
  }
 }

 cout<<"You Won!"<<endl;*/
 return 0;
}
