#include "Deck.h"

// Builds the deck
Deck::Deck(const CardFactory*cf){
  *this=cf->getFactory()->getDeck();
  shuffleDeck();
}

// reconstructs the deck from file. 
Deck::Deck(istream& input, const CardFactory* cf){
  //to do
}

// returns and removes the top card from the deck
Card* Deck::draw(){
  Card*last=nullptr;
  if(!this->empty()){
    Card*last=this->back();
    this->pop_back();
  }
  return last;
}

//Shuffles the deck
void Deck::shuffleDeck(){
  random_device rd;
  mt19937 g(rd());
  shuffle(this->begin(),this->end(),g);
}