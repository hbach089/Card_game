#ifndef SOY_H
#define SOY_H
#include "Card.h"

class soy:public Card{
  public:
  int getCardsPerCoin(int) const;
  string getName() const;
  void print(ostream&) const;
};

#endif
