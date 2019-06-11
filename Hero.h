#ifndef HERO_H
#define HERO_H
class Hero: public Character{
 public:
  int attack();
  void setLocation(int location);
  int getLocation();
 private:
  int _numPotions; 
  int _location = 0;
};
#endif
