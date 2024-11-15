#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std;

class Player{
  string name;
  int coins;
  public:
    Player(std::string&);
    // Player(istream&, const CardFactory*);
    string getName();
    int getNumCoins();
    Player& operator+=(int);
    int getMaxNumChains();
    int getNumChains();
    // Chain& operator[](int i);
    void buyThirdChain();
    void printHand(ostream&, bool);
    friend ostream& operator<<(ostream&,Player&);
};

ostream& operator<<(ostream& out,Player& p){
  out<<p.name<<" "<<p.getNumCoins();
  //more to implement...
}
#endif

