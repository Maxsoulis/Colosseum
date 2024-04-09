#include "Enemy.h "
Enemy::Enemy(string n, int h,int a, int d,int mDA, vector<Item> eDrops): GameCharacter(n, h, a, d){
  maxDropAmount = mDA;
  enemyDrops = eDrops;
}
void Enemy::pickDrop(){
  int size = enemyDrops.size();
  srand((unsigned) time(NULL));
  int itemChooser = rand() % size;
  auto it = enemyDrops.begin();
  cout << itemChooser << '\n';
  for(int i = 0; i < itemChooser; i++){
    it++;
  }
  enemyDrop = *it;
  amountDropped = rand() % maxDropAmount;
  
}
void Enemy::printDrop(){
  cout << "The " << getName() << " " << "dropped" << " "0 << amountDropped << " " << enemyDrop.name<<'\n';
}
