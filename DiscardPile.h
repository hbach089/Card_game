#ifndef DISCARDPILE_H
#define DISCARDPILE_H
#include <iostream>
#include <string.h>
#include <vector>
#include "Card.h"

using namespace std;

class DiscardPile{
  vector<Card*> discpile; 
  public:
  // DiscardPile(istream&, const CardFactory*);
  DiscardPile& operator+=(Card*);
  Card* pickUp();
  Card* top();
  void print(std::ostream&);
  friend ostream& operator<<(ostream&,DiscardPile&);
};

ostream& operator<<(ostream& out,DiscardPile& dp){
  if(dp.discpile.empty()){
    out<<"";
  }
  else{
    out<<dp.discpile.back();
  }
  return out;
}

// ostream& operator<<(ostream& out,DiscardPile& dp){
//   if(dp.empty()){
//     out<<"";
//     return out;
//   }
//   else{
//     Card*last=dp.top();
//     out<<*last;
//     return out;
//   }
// }



//TODOOOOOOO: DISCARDPILE.CPP!!!!!!!!!!!!!!!!!!!!!!
//deck
//tous les cartes
// et le template Chain (manuel textbook)

#endif