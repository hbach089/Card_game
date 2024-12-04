#include "soy.h"


int soy::getCardsPerCoin(int coins)const{
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
  return 0; 
}
string soy::getName()const{
  return "soy";
}
void soy::print(ostream& out)const{
  out<<"s";
}