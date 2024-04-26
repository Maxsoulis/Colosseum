#ifndef PLAYER_H
#define PLAYER_H
#include "Shop.h"
#include "GameCharacter.h"
class Player : public GameCharacter{
 private:
 string name;
 int health, attack, defense, money;
 Item copyOfItem;
 public:
 vector<Item> inventory;
 Player(string = "", int = 0, int = 0, int = 0, int = 0,  vector<Item> = vector<Item>() );
 void removeItem(Item &);
 void addItem(Item&);
 void buyItem(int, Item&);
 void sellItem(int, Item&);
 int getMoney();
 void setNewMoney(int);
};
#endif
