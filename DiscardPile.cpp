#include "DiscardPile.h"

using namespace std;


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

void DiscardPile::print(std::ostream& out){
  if(!discpile.empty()){
    for(int i=0;i<discpile.size();i++){
      // discpile[i]->print(out);
      out<<discpile[i]<<" ";
    }
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

