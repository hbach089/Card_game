#include "Green.h"


int Green::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 3;
  }
  else if(coins==2){
    return 5;
  }
  else if(coins==3){
    return 6;
  }
  else if(coins==4){
    return 7;
  }
  return 0;
}
string Green::getName()const{
  return "Green";
}
void Green::print(ostream& out)const{
  out<<"G";
}