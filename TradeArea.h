#ifndef TRADEAREA_H
#define TRADEAREA_H
#include <iostream>
#include "Card.h"
#include <list>

using namespace std;


class TradeArea{
  list<Card*> clist;
  public:
  TradeArea(istream&, const CardFactory*);
  TradeArea& operator+=(Card*);
  bool legal(Card*) const;
  Card* trade(string);
  int numCards() const;
  friend ostream & operator << (ostream &, const TradeArea &);
};

ostream & operator<<(ostream& out,const TradeArea& ta){
  for(const auto& card : ta.clist) {
    out << *card << " ";
  }
  return out;
}

#endif