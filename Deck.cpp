#include "Deck.h"


Deck::Deck(const CardFactory*cf){
  *this=cf->getFactory()->getDeck();
  shuffleDeck();
}

Deck::Deck(istream& ipt, const CardFactory*cardfact){

}


Card* Deck::draw(){
  Card*last=nullptr;
  if(!this->empty()){
    // last=decks.back();
    // decks.pop_back();
    Card*last=this->back();
    this->pop_back();
  }
  return last;
}

void Deck::shuffleDeck(){
  random_device rd;
  mt19937 g(rd());
  shuffle(this->begin(),this->end(),g);
}


