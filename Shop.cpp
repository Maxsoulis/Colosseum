#include "Shop.h"

Shop::Shop(vector<Item> i){
  items = i;
}
void Shop::introduceShop(){
  cout << "Welcome to the shop, where you can buy items and equipment to use in battle and sell items that you get." <<'\n';
}
string Shop::shopDialogue(){
    dialogueOptions[0] = "Hey, back again huh.";
    dialogueOptions[1] = "How are we today?";
    dialogueOptions[2] = "Me and Marcell are hitting the bar later care to join? Nah yer too soft";
    dialogueOptions[3] = "Battles are hard fought with brave men, strong weapons, and some nice potions";
}
void Shop::presentItems(vector<Item> items){
  int size  = items.size();
  auto it = items.begin();
  while(it != items.end()){
    cout << &it;
    it++;
  }
}
