#ifndef PROG3GAME_CARD_H
#define PROG3GAME_CARD_H
#include <iostream>
using namespace std;
class Card{
protected:
    int number;
    bool flag;
public:
    Card(int n);
    Card()=default;
    virtual void display();
    ~Card();
};
#endif
