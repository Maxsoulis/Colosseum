#include "Item.h"
Item::Item(string n, int h, int a, int d, int p, int q, bool iC  ): GameCharacter(n, h, a, d) {
  price = p;
  quantity = q;
  isConsumable = iC;
}
void Item::printStats(){
  cout << name << '\n';
  cout << "Increases health by " << health << " points" <<'\n';
  cout << "Increases attack by " << attack << " points" << '\n';
  cout << "Increases defense by " << defense << " points" << '\n';
}
 
void Item::setNewItemPrice(int newItemPrice){
  price = newItemPrice;
}
int Item::getItemPrice(){
  return price;
}
int Item::getQuantity(){
  return quantity;
}
void Item::updateQuantity( int q){
  quantity = q;
}
bool Item::getIsConsumable(){
  return isConsumable;
}
 
 

 
