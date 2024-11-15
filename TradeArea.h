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
  bool legal(Card*);
  Card* trade(string);
  int numCards();
};
#endif