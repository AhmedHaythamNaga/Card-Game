#ifndef PROG3GAME_PLAYER_H
#define PROG3GAME_PLAYER_H
#include <iostream>
using namespace std;

class Player{
private:
    string name;
    int score;
public:
    Player()= default;
    Player(string n);
    void displayScore();
    ~Player();
};
#endif
