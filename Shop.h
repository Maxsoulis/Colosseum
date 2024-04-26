#ifndef SHOP_H
#define SHOP_H
#include "Item.h"
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;
class Shop{
  private:
      vector<Item> foodItems;
      vector<Item> weapons;
      vector<Item> armor;
      vector<Item> potions;
      vector<string> dialogueOptions;
      vector<Item> specialItems;
      Item item;
      public:
      string alphabet;
      Shop(vector<Item>, vector<Item>, vector<Item>, vector<Item>, vector<Item>);
      void introduceShop();
      string shopDialogue();
      void shopMenu();
      void presentItems(vector<Item>); 
};
#endif
