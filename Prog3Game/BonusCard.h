#ifndef PROG3GAME_BONUSCARD_H
#define PROG3GAME_BONUSCARD_H
#include "Card.h"

class BonusCard:public Card{
private:
    int bonus;
public:
    BonusCard(int n,int b);
    BonusCard()= default;
    void display();
    ~BonusCard();
};
#endif