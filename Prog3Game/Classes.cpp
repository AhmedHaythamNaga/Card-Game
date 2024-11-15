#include "Game.h"
#include "StandardCard.h"
#include "BonusCard.h"
#include "PenaltyCard.h"

//Card ;)
Card::Card(int n) {
    number=n;
    flag=false;
}
void Card::display() {
    if(flag){
        cout<< number<<endl;
    }
    else{
        cout <<"*"<<endl;
    }
}
Card::~Card(){cout << "Card matched: ";}

//StandardCard ;)
StandardCard::StandardCard(int n): Card(n){}
void StandardCard::display(){Card::display();}
StandardCard::~StandardCard(){cout<<"Standard :)"<<endl;}

//BonusCard ;)
BonusCard::BonusCard(int n, int b):Card(n) {bonus=b;}
void BonusCard::display() {Card::display();}
BonusCard::~BonusCard(){cout<<"Bonus :)"<<endl;}

//PenaltyCard ;)
PenaltyCard::PenaltyCard(int n, int d): Card(n) {deduct=d;}
void PenaltyCard::display() {Card::display();}
PenaltyCard::~PenaltyCard() {cout<<"Penalty :)"<<endl;}

//Player ;)
Player::Player(string n) {name=n;score=0;}
void Player::displayScore(){cout << "Score: "<<score<<endl;}
Player::~Player(){cout<<"Blabeezo :("<<endl;}

//

int main(){
    return 0;
}