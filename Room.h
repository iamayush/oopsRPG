#ifndef ROOM_H
#define ROOM_H
class Room{
 public:
  Room(Room &parent,
       Room &next1,
       Room &next2,
       Character &char1,
       Character &char2,
       int numShield,
       int numPotion);
  void printRoomInfo();
  void setRoomDesc(string message);
  void pickShield(); //decrement num of shields in room
  int getNumShield();
  void pickPotion();
  int getNumPotion();
  char getIsRoomClear();
  void clearRoom(); //sets isRoomClear = 1 
 private:
  Room *_parent;
  Room *_next1;
  Room *_next2;
  string _roomDesc;
  Character *_char1;
  Character *_char2;
  int _numShield;
  int _numPotion;
  char _isRoomClear = 0;
};
#endif
