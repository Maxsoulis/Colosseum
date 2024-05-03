#include "Empire.h"
Empire::Empire(Player p){
  player = p;
}
void Empire::printActions(int numActions, string actions[]){
  for(int i = 0; i < numActions; i++){
    cout << actions[i] <<'\n';
  }
}
void Empire::handleBuyingActions(Shop shop, vector<Item> itemsToBuy){
   shop.presentItems(itemsToBuy);
   int numOfItemsToBuy = itemsToBuy.size();
   char input;
   bool valid = false;
   while(valid == false){
   cin >> input;
   for(int i = 0; i < numOfItemsToBuy; i++){
    char alphabetLetter = shop.alphabet[i];
    if(input == alphabetLetter){
      Item itemToAdd = itemsToBuy[i];
      player.addItem(itemToAdd);
      valid = true;
      break;
    }
   }
   cout << "That is not a valid option, try again" << '\n';
   }
}
int Empire::performEndGameLogic(){
  string actions[] = {"a. Yes", "b. No"};
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
void Empire::handleShopActions(Shop shop){
  shop.introduceShop();
  string actions[] = {"a. Buy Food", "b.Buy Weapons", "c. Buy Armor","d. Buy Potions","e. Special Items" "f. Sell Items"};
  printActions(5, actions);
  char menuShopActions;
  cin >> menuShopActions;
  switch(menuShopActions){
    case 'a': {
      shop.presentItems(shop.foodItems);
      handleBuyingActions(shop, shop.foodItems);
      break;
    }
    case 'b': {
      shop. presentItems(shop.weapons);
      handleBuyingActions(shop, shop.weapons);
      break;
    }
    case 'c': {
      shop.presentItems(shop.armor);
      handleBuyingActions(shop, shop.armor);
      break;
    }
    case 'd': {
      shop.presentItems(shop.potions);
      handleBuyingActions(shop, shop.potions);
      break;
    }
    case 'e': {
      shop.presentItems(shop.specialItems);
      handleBuyingActions(shop,shop.specialItems);
      break;
    }
    case 'f': {
      cout << "Enter the item you want to sell" << '\n';
      string itemToSellName;
      auto it = player.inventory.begin();
      while(it != player.inventory.end()){ 
        cout << "Going through handleShopActions" << '\n';
        bool foundItem = false;
        cin >> itemToSellName;
        Item dummyItem = *it;
        string dummyItemName = dummyItem.getName();
        if(itemToSellName == dummyItemName){
          player.sellItem(dummyItem);
          foundItem = true;
          break;
        }
      }
      
    }
}
}
void Empire::handleBattleActions(Enemy enemy){
int extraDamage;
while(true){
string actions[] = {"a. Attack", "b. Use item", "c. Retreat"
};
printActions(3, actions);
string battleInputs;
cin >> battleInputs;
if(battleInputs == "a" ){
  int damage = player.getAttack() + extraDamage;
  enemy.takeDamage(damage);
  cout << "You did " << damage << " damage to the " << enemy.getName() << '\n';
  cout << enemy.getName() << " has " << enemy.getCurrentHealth() << " hitpoints left" << '\n';
  bool isDead = enemy.checkIsDead();
  if(isDead){
    cout << "You defeated the " << enemy.getName() << '\n';
    return;
  }
  damage = enemy.getAttack();
  player.takeDamage(damage);
  cout<< "The enemy did" << damage << " hitpoints to you " << '\n';
  isDead = player.checkIsDead();
  cout << "You have " << player.getCurrentHealth() << " hitpoints left" << '\n';
  extraDamage = 0;
  if(isDead){
    cout << "You died " << '\n';
    return;
  }
}
else if(battleInputs == "b"){
  int numberOfItems;
  auto findConsumableItems = player.inventory.begin();
  while(findConsumableItems != player.inventory.end()){
    Item item = *findConsumableItems;
    if(item.getIsConsumable() == true){
       item.printStats();
  }
cout << "What would you like to use" << '\n';
string itemToUseName;
while(true){
  cin >> itemToUseName;
  bool itemFound = player.findItem(dummyItem, itemToUseName);
  if(itemFound){
    player.removeItem(player.currentItem);
    break;
  }
}
  }
}
else{
  return;
}
}
}
void Empire::handleColosseumActions(Colosseum colosseum){
 
  string colosseumActions[] = {"a. Battle", "b. Exit"};
  printActions(2, colosseumActions);
  string colosseumInput;
  cin >>  colosseumInput;
  if(colosseumInput == "a"){
    Enemy enemyToFight = colosseum.pickEnemy();
    handleBattleActions(enemyToFight);
    string afterBattleActions[] = { "a. Fight Again", "b. Exit"};
    printActions(2, afterBattleActions);
    char input;
    while(true){
      cin >>  input;
      if(input == 'a'){
        enemyToFight = colosseum.pickEnemy();
        handleBattleActions(enemyToFight);
      }
      else if(input == 'b'){
        return;
      }
      else {
        cout << "That is not an option, try again" << '\n';
      }
    }
    
  }
  else{
    return;
  }
}
