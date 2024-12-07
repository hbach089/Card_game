#include "DiscardPile.h"

using namespace std;

//reconstructs the DiscardPile from file
DiscardPile::DiscardPile(istream& input, const CardFactory* factory) {
  //to do
}

// discards the card to the pile.
DiscardPile& DiscardPile::operator+=(Card* card){
  discpile.push_back(card);
  return *this;
}

//returns but does not remove the top card from the discard pile.
Card* DiscardPile::top(){
 if(discpile.empty()){
  return nullptr;
 }
 return discpile.back();
}

//returns and removes the top card from the discard pile.
Card* DiscardPile::pickUp(){
 if(discpile.empty()){
  return nullptr;
 }
 Card*back=top();
 discpile.pop_back();
 return back;
}

//prints all the cards in discard pile
void DiscardPile::print(std::ostream& out) const{
  for (const auto& card : discpile) {
    out << *card << " ";
  }
}