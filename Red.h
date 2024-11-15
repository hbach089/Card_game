#ifndef RED_H
#define RED_H
#include "Card.h"

class Red:public Card{
  public:
  int getCardsPerCoin(int)const;
  string getName()const;
  void print(ostream&)const;
};

#endif
