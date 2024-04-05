#include "Item.h"
Item::Item(string n, int h, int a, int d ){
  name = n;
  health = h;
  attack = a;
  defense = d;
}
Item::printStats(){
  cout << name << '\n';
  cout << "Increases health by " << health << " points" <<'\n';
  cout << "Increases attack by " << attack << " points" << '\n';
  cout << "Increases defense by " << defense << " points" << '\n';
}
