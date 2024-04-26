#ifndef EMPIRE_H
#define EMPIRE_H
#include "Player.h"
#include "Colosseum.h"
class Empire{
private:
public:
vector<Item> item;
int performEndGameLogic();
int runEmpire();
void handleColosseumActions(Colosseum*);
void handleBattleActions(Enemy *);
void handleBuyingActions( Shop, vector<Item>);
void handleShopActions(Shop*);
void handleMovementActions( );
void printActions(int, string[]);
};
#endif
