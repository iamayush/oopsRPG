#ifndef HERO_H
#define HERO_H
class Hero: public Character{
 public:
  int attack();
 private:
  int _numPotions; 
};
#endif
