#ifndef DISCARDPILE_H
#define DISCARDPILE_H
#include <iostream>
#include <string.h>
#include <vector>
#include "Card.h"
#include "CardFactory.h"

using namespace std;

class DiscardPile{
  vector<Card*> discpile; 
  public:
  DiscardPile() {};
  DiscardPile(istream&, const CardFactory*);
  DiscardPile& operator+=(Card*);
  Card* pickUp();
  Card* top();
  void print(std::ostream&) const;
  friend ostream& operator<<(ostream&,DiscardPile&);
};

ostream& operator<<(ostream& out,DiscardPile& dp){
  if (!dp.discpile.empty()) {
    out << dp.discpile.back();
  }
  return out;
}

#endif