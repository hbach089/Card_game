#include "DiscardPile.h"

using namespace std;

//reconstructs the DiscardPile from file
DiscardPile::DiscardPile(istream& input, const CardFactory* factory) {
  //to do
}

DiscardPile& DiscardPile::operator+=(Card* card){
  discpile.push_back(card);
  return *this;
}

Card* DiscardPile::top(){
 if(discpile.empty()){
  return nullptr;
 }
 return discpile.back();
}

Card* DiscardPile::pickUp(){
 if(discpile.empty()){
  return nullptr;
 }
 Card*back=top();
 discpile.pop_back();
 return back;
}

void DiscardPile::print(std::ostream& out) const{
  for (const auto& card : discpile) {
    out << *card << " ";
  }
}

// DiscardPile& DiscardPile::operator+=(Card* card){
//   this->push_back(card);
//   return *this;
// }

// Card* DiscardPile::pickUp(){
//  if(this->empty()){
//   return nullptr;
//  }
//  Card*ct=top();
//  this->pop_back();
//  return ct;
// }

// Card* DiscardPile::top(){
//  if(this->empty()){
//   return nullptr;
//  }
//  Card*ct=this->back();
//  return ct;
// } 

