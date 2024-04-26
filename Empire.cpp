#include "Empire.h"
Empire::Empire(Player p){
  player = p;
}
void printActions(int numActions, string actions[]){
  for(int i = 0; i < numActions; i++){
    cout << actions[i] <<'\n';
  }
}
void handleBuyingActions(Shop shop, vector<Item> itemsToBuy){
   shop.presentItems(itemsToBuy);
   int numOfItemsToBuy = itemsToBuy.size();
   string input;
   bool valid = false;
   while(valid == false){
   cin >> input;
   for(int i = 0; i < numOfItemsToBuy; i++){
    if(input == shop.alphabet[i]){
      Item itemToAdd = itemsToBuy[i];
      player.addItem(itemToAdd);
      valid = true;
      break;
    }
   }
   cout << "That is not a valid option, try again" << '\n';
   }
}
int performEndGameLogic(){
  string actions = {"a. Yes", "b. No"};
  printActions(2, actions);
  string input;
  cin >> input;
  while(true){
    if(input == "a"){
      return 1;
    }
    else if(input == "b"){
      return 0;
    }
    else {
      cout << "That is not an option, try again" << '\n';
    }
  }
}
void handleShopActions(Shop* shop){
  shop->intruduceShop();
  string actions[] = {"a. Buy Food", "b.Buy Weapons", "c. Buy Armor","d. Buy Potions","e. Special Items" "f. Sell Items"};
  printActions(5, actions);
  string menuShopActions;
  cin >> menuShopActions;
  switch(menuShopActions){
    case "a": {
      shop-> presentItems(foodItem);
      shop-> handleBuyingActions(foodItem);
      break;
    }
    case "b": {
      shop-> presentItems(weapons);
      shop -> handleBuyingActions(weapons);
      break;
    }
    case "c": {
      shop-> presentItems(armor);
      shop-> handleBuyingActions(armor);
      break;
    }
    case "d": {
      shop-> presentItems(potions);
      shop-> handleBuyingActions(potions);
      break;
    }
    case "e": {
      shop-> presentItems(specialItems);
      shop-> handleBuyingActions(specialItems);
      break;
    }
    case "f": {
      cout << "Enter what Item you would like to sell" << '\n';
      Item itemToSell;
      int amountToSell, amountOfItem;
      string itemToSellName;
      while (true){
        cin >> itemToSellName;
        auto findItem = player.inventory. begin();
        int amountOfItem, currentIndex;
        bool itemNotFound = true;
        while(findItem != player.inventory. end()){
          Item currentItem = player.inventory[currentIndex];
          // Sets a boolean value to false to be able to break out of the outer while loop and sets the itemToSell to the current item.
          if(currentItem.getName() == itemToSellName){
            itemToSell = currenItem;
            itemNotFound = false;
            amountOfItem++;
          }
          currentIndex++;
          findItem++;
        }
        if(itemNotFound){
          cout << "You do not own any of that Item, try again" << '\n';
        }
        else break;
      }
      cout << "Enter the amount of the item that you would like to sell" << '\n';
      while (true){
        cin >> amountToSell;
        if(amountToSell > amountOfItem){
          cout << "You do not have enough of those items to sell, try again" <<'\n';  
        }
        else break;  
      }
      player.sellItems(amountToSell, itemToSell);
      break;
    }
    default: {
      cout << "That is not an option" <<'\n';
    }
  }
}
