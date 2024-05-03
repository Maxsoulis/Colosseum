#ifndef EMPIRE_H
#define EMPIRE_H
#include "Player.h"
#include "Colosseum.h"
using std::cin;
class Empire{
private:
Item dummyItem;
public:
Player player;
Empire(Player);
vector<Item> item;
int performEndGameLogic();
int runEmpire();
void handleColosseumActions(Colosseum);
void handleBattleActions(Enemy);
void handleBuyingActions( Shop, vector<Item>);
void handleShopActions(Shop);
void handleMovementActions( );
void printActions(int, string[]);
};
#endif
