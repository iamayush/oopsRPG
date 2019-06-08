#ifndef CHARACTER_H
#define CHARACTER_H

class Character{
 public:
  void printStats();
  void setName(string name);
  void setAttackPower(int attackPower);
  void setHealth(int health);
 protected:
  string _name;
  int _attackPower;
  int _health;
};

#endif
