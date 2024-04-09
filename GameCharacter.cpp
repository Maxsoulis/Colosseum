#include "GameCharacter.h"

GameCharacter::GameCharacter(string n, int h, int a, int d ) {
    name = n;
    currentHealth = h;
    maxHealth = h;
    attack = a;
    defense = d;
}
string GameCharacter::getName(){
  return name;
}
int GameCharacter::getAttack(){
  return attack;
}
int GameCharacter::getCurrentHealth(){
  return currentHealth;
}
int GameCharacter::getMaxHealth(){
  return maxHealth;
}
int GameCharacter::getDefense(){
  return defense;
}
void GameCharacter::setNewName(string newName){
  name = newName;
}
void GameCharacter::setNewAttack(int newAttack){
  attack = newAttack;
}
void GameCharacter::setNewHealth(int newHealth){
  currentHealth = newHealth;
  maxHealth = newHealth;
}
void GameCharacter::setNewDefense(int newDefense){
  defense = newDefense;
}
int GameCharacter::takeDamage(int amount){
  int damage = amount;
  currentHealth -= damage;
  return damage;
}
bool GameCharacter::checkIsDead(){
  return currentHealth <= 0;
}
