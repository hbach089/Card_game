#ifndef BLACK_H
#define BLACK_H
#include "Card.h"

class black:public Card{
  public:
  int getCardsPerCoin(int)const;
  string getName()const;
  void print(ostream&)const;
};

#endif
