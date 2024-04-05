#include "GameCharacter.h"

GameCharacter::GameCharacter(string n, int h, int a, int d ) {
    name = n;
    currentHealth = h;
    maxHealth = h;
    attack = a;
    defense = d;
}
int GameCharacter::takeDamage(int amount){
  int damage = amount;
  currentHealth -= damage;
  return damage;
}
bool GameCharacter::checkIsDead(){
  return currentHealth <= 0;
}
