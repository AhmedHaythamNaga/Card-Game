#ifndef PROG3GAME_GAME_H
#define PROG3GAME_GAME_H
#include "Player.h"
#include "Deck.h"
#include "Card.h"
// ask ahmed marie about design of turn
class Game{
private:
    int turn;
    Player p1;
    Player p2;
public:
    Game() = default;
    // add turn in the game 2nd constructor 0 for p1 and 1 for p2
    // add points attribite
    Game(Player p1,Player p2, int turn=0);
    void initializeGame();
    ~Game();
};

#endif
