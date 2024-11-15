#ifndef BLUE_H
#define BLUE_H
#include "Card.h"

class Blue:public Card{
  public:
  int getCardsPerCoin(int) const override;
  string getName() const override;
  void print(ostream&) const override;
};

#endif
