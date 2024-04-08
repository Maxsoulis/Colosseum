#include "Enemy.h"
Enemy::Enemy(string n, int h,int a, int d, vector<Item> eDrops)  {
  name = n;
  health = h;
  attack = a;
  defense = d;
  enemyDrops = eDrops;
}
void Enemy::pickDrop(){
  int size = enemyDrops.size();
  srand((unsigned) time(NULL));
  int itemChooser = rand() % size;
  auto it = enemyDrops.begin();
  for(int i = 0; i < itemChooser; i++){
    it++;
  }
  enemyDrop = *it;
  int amountDropped = rand() % enemyDrop.maxDropAmount;
  
}
