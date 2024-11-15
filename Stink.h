#ifndef STINK_H
#define STINK_H
#include "Card.h"

class Stink:public Card{
  public:
  int getCardsPerCoin(int)const;
  string getName()const;
  void print(ostream&)const;
};

#endif
