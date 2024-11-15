#ifndef CHILI_H
#define CHILI_H
#include "Card.h"

class Chili:public Card{
  public:
  int getCardsPerCoin(int)const;
  string getName()const;
  void print(ostream&)const;
};

#endif
