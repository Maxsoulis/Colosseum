#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>
#include "GameCharacter.hpp"
using std::string;
using std::cout;
class Item : public GameCharacter{
  private:
  string name;
  int attack, health, defense, price, quantity;
  bool isConsumable;
  public:
  Item(string = " ", int = 0, int = 0, int = 0, int = 0, int = 0, bool = false );
  void printStats();
  int getItemPrice();
  void setNewItemPrice(int);
  int getQuantity();
  void updateQuantity( int);
  bool getIsConsumable();

};
#endif
