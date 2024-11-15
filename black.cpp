#include "black.h"


int black::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 2;
  }
  else if(coins==2){
    return 4;
  }
  else if(coins==3){
    return 6;
  }
  else if(coins==4){
    return 7;
  }
}

string black::getName()const{
  return "black";
}

void black::print(ostream& out)const{
  out<<"b"<<endl;
}

