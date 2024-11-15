#ifndef PROG3GAME_STANDARDCARD_H
#define PROG3GAME_STANDARDCARD_H
#include "Card.h"


class StandardCard:public Card{
public:
    StandardCard(int n);
    StandardCard() =default;
    void display();
    ~StandardCard();
};
#endif
