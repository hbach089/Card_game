#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Deck.h"
#include "Card.h"
#include "Blue.h"
#include "Chili.h"
#include "Green.h"
#include "Stink.h"
#include "soy.h"
#include "black.h"
#include "Red.h"
#include "garden.h"

using namespace std;

class CardFactory{
  private:
  vector<Card*> cards;
  static CardFactory*cf;
  CardFactory();
  public:
  static CardFactory* getFactory();
  Deck getDeck();
  ~CardFactory();

};
#endif