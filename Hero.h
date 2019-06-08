#ifndef HERO_H
#define HERO_H
class Hero: public Character{
 public:
  void attack();
 private:
  int _numPotions; 
};
#endif
