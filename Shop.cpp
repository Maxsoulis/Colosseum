#include "Shop.hpp"

Shop::Shop(vector<Item> sI, vector<Item> fI, vector<Item> p, vector<Item> w, vector<Item> a){
  specialItems = sI;
  foodItems = fI;
  potions = p;
  weapons = w;
  armor = a;
}
void Shop::introduceShop(){
  cout << "Welcome to the shop, where you can buy items and equipment to use in battle and sell items that you get." <<'\n';
}
string Shop::shopDialogue(){
  //creates dialogue options and will randomly pick one when opening the shop.
    dialogueOptions[0] = "Hey, back again huh.";
    dialogueOptions[1] = "How are we today?";
    dialogueOptions[2] = "Me and Marcell are hitting the bar later care to join?  ";
    dialogueOptions[3] = "Battles are hard fought with brave men, strong weapons, and some nice potions";
}
void Shop::presentItems(vector<Item> items ){
  //iterates through a vector of items and prints all of them
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  char letter;
  int alphabetPos = 0;
  int size  = items.size();
  auto it = items.begin();
  while(it != items.end()){
    item = *it;
    letter = alphabet[alphabetPos];
    cout << letter<< ". " << item.getName() <<'\n';
    it++;
    alphabetPos++;
  }

}
