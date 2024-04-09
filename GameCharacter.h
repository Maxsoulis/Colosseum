#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H
#include <string>
using std::string;
class GameCharacter{
  private:
  string name;
  int currentHealth, maxHealth, attack, defense;
  public:
  GameCharacter(string, int, int, int);
  string getName();
  int getHealth();
  int getAttack();
  int getCurrentHealth();
  int getMaxHealth();
  int getDefense();
  void setNewName(string);
  void setNewAttack(int);
  void setNewHealth(int);
  void setNewDefense(int);
  int takeDamage(int);
  bool checkIsDead();
};
#endif
