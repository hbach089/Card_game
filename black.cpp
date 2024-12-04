#include "black.h"


int black::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 2;
  }
  else if(coins==2){
    return 4;
  }
  else if(coins==3){
    return 5;
  }
  else if(coins==4){
    return 6;
  }
  return 0;
}

string black::getName()const{
  return "black";
}

void black::print(ostream& out)const{
  out<<"b";
}

