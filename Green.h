#ifndef GREEN_H
#define GREEN_H
#include "Card.h"

class Green:public Card{
  public:
  int getCardsPerCoin(int)const;
  string getName()const;
  void print(ostream&)const;
};

#endif
