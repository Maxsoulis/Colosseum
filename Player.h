#ifndef PLAYER_H
#define PLAYER_H
#include "Shop.h"
#include "GameCharacter.h"
class Player : public GameCharacter{
 private:
 string name;
 int health, attack, defense, money;
 vector<Item> inventory;
 Item copyOfItem;
 public:
 Player(string, int, int, int, int,  vector<Item> );
 void addItem(Item);
 void buyItem(int, Item);
 void sellItem(int, Item);
};
#endif
