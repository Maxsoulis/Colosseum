#ifndef ENEMY_H
#define ENEMY_H
#include "Item.h"
#include <vector>
 
using std::vector;
class Enemy{
  public:
  Item enemyDrop;
  string name;
  int health, attack, defense;
  vector<Item> enemyDrops;
  Enemy(string = " ", int = 0, int = 0, int = 0, vector<Item> = vector<Item>());
  void pickDrop();


};
#endif
