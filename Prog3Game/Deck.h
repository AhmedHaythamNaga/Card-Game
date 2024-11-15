#ifndef PROG3GAME_DECK_H
#define PROG3GAME_DECK_H
#include "Card.h"

class Deck{
private:
    Card* cards;
public:
    Deck()=default;
    Deck(Card* c);
    void shuffle();
    void displayGrid();
    ~Deck();
};
#endif

