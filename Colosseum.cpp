#include "Colosseum.h"

Colosseum::Colosseum(vector <Enemy> e){
  enemies = e;
}
void Colosseum::upgradeEnemy(Enemy &enemy){
  newHealth = enemy.getMaxHealth() + 5;
  newAttack = enemy.getAttack() + 5;
  newDefense = enemy.getDefense() + 5;
  enemy.setNewHealth(newHealth);  
  enemy.setNewAttack(newAttack);
  enemy.setNewDefense(newDefense);
}
void Colosseum::printActions(int numActions, string actions[]){
  for(int i = 0; i < numActions; i++){
   cout << actions[i] << '\n';
  }
}
void Colosseum::battle(){
  int amountOfEnemies = enemies.size();
  srand((unsigned) time(NULL));
  int enemyChooser = rand() % amountOfEnemies;
  auto it = enemies.begin();
  for(int i = 0; i < enemyChooser; i++){
    it++;
  }
  enemy = *it; 
  
}
