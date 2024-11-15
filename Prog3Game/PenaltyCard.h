#ifndef PROG3GAME_PENALTYCARD_H
#define PROG3GAME_PENALTYCARD_H
#include "Card.h"
class PenaltyCard:public Card{
private:
    int deduct;
public:
    PenaltyCard(int n,int d);
    PenaltyCard()=default;
    void display();
    ~PenaltyCard();
};
#endif
