#include "Player.h"
Player::Player(string n, int h, int a, int d, int m, vector<Item> in ): GameCharacter(n, h, a, d){
  money = m;
  inventory = in;
}
void Player::addItem(Item item){
  inventory.push_back(item);
}
void Player::buyItem(int numItems,Item itemToBuy){
  int cost = itemToBuy.getItemPrice() * numItems;
  for(int i = 0; i < numItems; i++){
    addItem(itemToBuy);
  }  
}
void Player::sellItem(int numItems, Item itemToSell){
  string nameOfItemToDelete = itemToSell.getName();
  auto iterator = inventory.begin();
  int itemPosition = 0;
  for(int i = 0; i < numItems; i++){
    while(iterator != inventory.end()){
      copyOfItem = *iterator;
      if(copyOfItem.getName() == nameOfItemToDelete){
       money += copyOfItem.getItemPrice();
        inventory.erase(inventory.begin() + itemPosition);
      return;
      }
      itemPosition++;
      iterator++;
    }
  }
}
