#include "CardFactory.h"

CardFactory* CardFactory::cf=nullptr;

CardFactory::CardFactory(){
  //Blue cards
  for(int i=0;i<20;i++){
    cards.push_back(new Blue());
  }

  //Chili cards
  for(int i=0;i<18;i++){
    cards.push_back(new Chili());
  }

  //Stink cards
  for(int i=0;i<16;i++){
    cards.push_back(new Stink());
  }

  //Green cards
  for(int i=0;i<14;i++){
    cards.push_back(new Green());
  }

  //soy cards
  for(int i=0;i<12;i++){
    cards.push_back(new soy());
  }

  //black cards
  for(int i=0;i<10;i++){
    cards.push_back(new black());
  }

  //Red cards
  for(int i=0;i<8;i++){
    cards.push_back(new Red());
  }

  //garden cards
  for(int i=0;i<6;i++){
    cards.push_back(new garden());
  }
}

CardFactory* CardFactory::getFactory(){
  if(cf==nullptr){
    cf=new CardFactory();
  }
  return cf;
}

Deck CardFactory::getDeck(){
  return Deck(this);
}

CardFactory::~CardFactory(){
  for(int i=0;i<cards.size();i++){
    delete cards[i];
  }
}