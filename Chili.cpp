#include "Chili.h"


int Chili::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 3;
  }
  else if(coins==2){
    return 6;
  }
  else if(coins==3){
    return 8;
  }
  else if(coins==4){
    return 9;
  }
  return 0;
}
string Chili::getName()const{
  return "Chili";
}
void Chili::print(ostream& out)const{
  out<<"C";
}