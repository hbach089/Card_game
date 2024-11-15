#ifndef GARDEN_H
#define GARDEN_H
#include "Card.h"

class garden:public Card{
  public:
  int getCardsPerCoin(int)const;
  string getName()const;
  void print(ostream&)const;
};

#endif
