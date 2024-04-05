#ifndef SHOP_H
#define SHOP_H
#include "Item.h"
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;
class Shop{
  public:
      vector<Item> items;
      vector<string> dialogueOptions;
      Shop(vector<Item>);
      void introduceShop();
      string shopDialogue();
      void shopMenu();
      void printActions();
      void presentItems(vector<Item>); 
};
#endif
