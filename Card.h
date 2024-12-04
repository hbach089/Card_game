#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card{
  protected:
  virtual void print(ostream&) const=0; //"Virtual Friend Function Idiom"
  public:
  virtual int getCardsPerCoin(int)const=0;
  virtual string getName()const=0;
  friend ostream & operator << (ostream &, const Card &);
};

ostream & operator << (ostream & out, const Card & card){
  card.print(out);
  return out;
}
#endif 

