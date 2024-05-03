#ifndef PLAYER_H
#define PLAYER_H
#include "Shop.hpp"
#include "GameCharacter.hpp"
using std::cin;
class Player : public GameCharacter{
 private:
 string name;
 int health, attack, defense, money, itemPosition;
 Item copyOfItem, dummyItem;
 public:
 Item currentItem;
 vector<Item> inventory;
 Player(string = "", int = 0, int = 0, int = 0, int = 0,  vector<Item> = vector<Item>() );
 void removeItem(Item &);
 void addItem(Item&);
 void buyItem(int, Item&);
 void sellItem(Item&);
 int getMoney();
 void setNewMoney(int);
 bool findItem(Item, string);
};
#endif
