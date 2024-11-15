#ifndef DECK_H
#define DECK_H
#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
#include "Card.h"
#include "CardFactory.h"


using namespace std;

class Deck: public vector<Card*>{
  // vector<Card*> decks;
  using vector<Card*>::vector;                    
  public:
  Deck(istream&, const CardFactory*);
  Deck(const CardFactory*);
  Card* draw();
  void shuffleDeck();
  friend ostream & operator<<(ostream&,const Deck&);
};

ostream & operator<<(ostream& out,const Deck& deck){
  for(auto card:deck){
    if(card){
      card->print(out);
    }
    out<<"";
  }
  return out;
}
#endif 