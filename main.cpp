#include <iostream>
#include <string>
using namespace std;

#include "Character.h"
#include "Hero.h"
#include "Swordsman.h"
 
int main(){
 Hero hero;
 Swordsman s1;
 hero.setName("Wesley");
 hero.setAttackPower(2);
 hero.setHealth(20);
 hero.printStats();
 // hero.attack();
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

 cout<<"You Won!"<<endl;
 return 0;
}
