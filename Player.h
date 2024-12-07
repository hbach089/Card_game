#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Chain.h"
#include "Hand.h"

using namespace std;

//NotEnoughCoins Exception class
class NotEnoughCoins : public exception {
    public:
    const char* what() const {
        return "Player does not have enough coins to buy third chain";
    }
};

class Player{
  string name;
  int coins;
  int maxNumOfChains;
  vector<Chain<Card>*> chains;
  Hand hand;
  public:
    Player(const std::string&);
    Player(istream&, const CardFactory*);
    string getName() const;
    int getNumCoins() const;
    Player& operator+=(int);
    int getMaxNumChains() const;
    int getNumChains() const;
    Hand& getHand();
    Chain<Card>& operator[](int i);
    void buyThirdChain();
    void printHand(ostream&, bool) const;
    friend ostream& operator<<(ostream&,Player&);
};

ostream& operator<<(ostream& out,Player& p){
  out << p.name << " " << p.getNumCoins() << " coins\n";
  for (const auto& chain : p.chains) {
    out << chain << "\n";
  }
  return out;
}
#endif

