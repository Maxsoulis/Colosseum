#include "Player.h"
Player::Player(string n, int h, int a, int d, int m, vector<Item> in ): GameCharacter(n, h, a, d){
  money = m;
  inventory = in;
}
bool Player::findItem(Item itemToFind, string itemName){
  // sets current Item to a blank value
  currentItem = dummyItem;
  if(inventory.size() == 0){
    return false;
  }
  auto findItem = inventory.begin();
  itemPosition = 0;
  // loops through the inventory and will check the item based on the inputted string or the actual item itself
  while(findItem != inventory.end()){
    currentItem = *findItem;
    string currentItemName = currentItem.getName();
    if(itemName.size() > 0){
      if(currentItemName == itemName){
        return true;
      }
    }
    else {
      string itemToFindName = itemToFind.getName();
      if(itemToFindName == currentItemName){
        return true;
      }
    }
    itemPosition++;
    findItem++;
  }
  return false;
}
void Player::removeItem(Item &item){
  findItem(item, "");
  int amountOfItem = item.getQuantity();
  if(amountOfItem == 1 ){
  inventory.erase(inventory.begin() +  itemPosition );
  }
  else{
  amountOfItem -= 1;
  item.updateQuantity(amountOfItem);
  inventory.erase(inventory.begin() + itemPosition );
  inventory.push_back(item);
  }
}
void Player::addItem(Item &item){
 bool itemFound = findItem(item, "");
  if(itemFound){
   int amountOfItem = item.getQuantity();
   amountOfItem += 1;
   item.updateQuantity(amountOfItem);
   inventory.erase(inventory.begin() + itemPosition);
   inventory.push_back(item);
   }
   else {
    item.updateQuantity(1);
    inventory.push_back(item);
   } 
}
void Player::buyItem(int numItems,Item &itemToBuy){
  int cost = itemToBuy.getItemPrice() * numItems;
  money -= cost;
  for(int i = 0; i < numItems; i++){
    addItem(itemToBuy);
  }  
}
void Player::sellItem( Item &itemToSell){
  bool itemFound = findItem(itemToSell,  "");
  if(itemFound){
    int numberOfItems = itemToSell.getQuantity();
    int numItems;
    while(true){
 
    cin >> numItems;
    if(numItems > numberOfItems){
      cout << "You are trying to sell more of that item than you have, enter another number" << '\n';
    }
    else break;
    }
    int gain = itemToSell.getItemPrice();
    int totalGain = gain * numItems;
    money += totalGain;
    for(int i = 0; i < numItems; i++){
      removeItem(itemToSell);
    }
  }
}
int Player::getMoney(){
  return money;
}
