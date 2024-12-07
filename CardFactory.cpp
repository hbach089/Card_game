#include "CardFactory.h"

CardFactory* CardFactory::cf=nullptr;

//constructor
CardFactory::CardFactory(){
  //Blue cards
  for(int i=0;i<20;i++){
    deck.push_back(new Blue());
  }

  //Chili cards
  for(int i=0;i<18;i++){
    deck.push_back(new Chili());
  }

  //Stink cards
  for(int i=0;i<16;i++){
    deck.push_back(new Stink());
  }

  //Green cards
  for(int i=0;i<14;i++){
    deck.push_back(new Green());
  }

  //soy cards
  for(int i=0;i<12;i++){
    deck.push_back(new soy());
  }

  //black cards
  for(int i=0;i<10;i++){
    deck.push_back(new black());
  }

  //Red cards
  for(int i=0;i<8;i++){
    deck.push_back(new Red());
  }

  //garden cards
  for(int i=0;i<6;i++){
    deck.push_back(new garden());
  }
}

//returns a pointer to the only instance of CardFactory.
CardFactory* CardFactory::getFactory(){
  if(cf==nullptr){
    cf=new CardFactory();
  }
  return cf;
}

//Creates the deck using the deck class and returns it
Deck CardFactory::getDeck(){
  return Deck(this);
}

//destructor
CardFactory::~CardFactory(){
  for(int i=0;i<deck.size();i++){
    delete deck[i];
  }
  deck.clear();
}