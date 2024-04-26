#include "Player.h"
Player::Player(string n, int h, int a, int d, int m, vector<Item> in ): GameCharacter(n, h, a, d){
  money = m;
  inventory = in;
}
void Player::removeItem(Item &item){
 auto findItem = inventory.begin();
 int itemPosition = 0;
 cout << "HEllo" << '\n';
 while(findItem != inventory.end()){
    copyOfItem = *findItem;
    if(copyOfItem.getName() == item.getName()){
      cout << "removing " << '\n';
      int amountOfItem = item.getQuantity();
      amountOfItem -= 1;
      item.updateQuantity(amountOfItem);
      inventory.erase(inventory.begin() + itemPosition);
      inventory.push_back(item);
      break;
    }
     itemPosition++;
     findItem++;
 }
 
}
void Player::addItem(Item &item){
 auto findItem = inventory.begin();
 int itemPosition = 0;
 bool addTheItem = true;
 //loops through the inventory and compares the current item to the item that is going to be added, and if the item is found in the inventory, it will delete that item and add an updated item to the inventory or else it will just keep all the values that it was entered in with, if it is not found it will add the item to the inventory while setting the quantity to one
 while(findItem != inventory.end()){
    copyOfItem = *findItem;
    if(copyOfItem.getName() == item.getName()){
      
      int amountOfItem = item.getQuantity();
      amountOfItem += 1;
      item.updateQuantity(amountOfItem);
      inventory.erase(inventory.begin() + itemPosition);
      inventory.push_back(item);
      addTheItem = false;
      break;
    }
     itemPosition++;
     findItem++;
 }
 // won't add the item if i just put else after the if
 if(addTheItem){
  item.updateQuantity(1);
  inventory.push_back(item);
 }
 
   
}
void Player::buyItem(int numItems,Item itemToBuy){

  int cost = itemToBuy.getItemPrice() * numItems;
  money -= cost;
  for(int i = 0; i < numItems; i++){
    addItem(itemToBuy);
  }  
}
void Player::sellItem(int numItems, Item &itemToSell){
  auto findItemToSell = inventory.begin();
  string nameOfItem = itemToSell.getName();
  while(findItemToSell != inventory.end()){
    copyOfItem = *findItemToSell;
    int itemAmount = itemToSell.getQuantity();
    if(nameOfItem == copyOfItem.getName()){
    removeItem(itemToSell);
    money -= numItems; 
     break;
    }
    int a = 0;
    for(int a = 0; a < 4; a++){
      break;
    }
    a++;
    findItemToSell++;
  }
}
int Player::getMoney(){
  return money;
}
