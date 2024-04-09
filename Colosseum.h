#ifndef COLOSSEUM_H
#define COLOSSEUM_H
#include "Enemy.h"
 
class Colosseum{
   
  private:
  int damage, newHealth, newAttack, newDefense;
  vector<Enemy> enemies;
  Enemy enemy;
  public:
  Colosseum(vector<Enemy>);
  void upgradeEnemy(Enemy &);
  void printActions(int, string[]);
  void battle();

};
#endif
