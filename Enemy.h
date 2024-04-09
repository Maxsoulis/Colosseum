#ifndef ENEMY_H
#define ENEMY_H
#include "Item.h"
#include "GameCharacter.h"
#include <vector>
 
using std::vector;
class Enemy: public GameCharacter{
  private:
  Item enemyDrop;
  string name;
  int health, attack, defense, maxDropAmount, amountDropped;
  vector<Item> enemyDrops;
  public:
  Enemy(string = " ", int = 0, int = 0, int = 0,int = 0, vector<Item> = vector<Item>());
  void pickDrop();
  void printDrop();
};
#endif
