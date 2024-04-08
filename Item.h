#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>
using std::string;
using std::cout;
class Item{
  public:
  string name;
  int attack, health, defense, price, maxDropAmount;
  Item(string = " ", int = 0, int = 0, int = 0, int = 0, int = 0);
  void printStats();
};
#endif

