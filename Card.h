#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string.h>

using namespace std;

class Card{
  protected:
  string c_name;
  public:
  virtual int getCardsPerCoin(int)const=0;
  virtual string getName()const=0;
  virtual void print(ostream&) const=0;
  friend virtual ostream & operator << (ostream &, const Card &);

};

ostream & operator << (ostream & out, const Card & card){
  card.print(out);
  return out;
}
#endif 

