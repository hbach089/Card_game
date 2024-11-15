#include "Stink.h"


int Stink::getCardsPerCoin(int coins)const{
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
}
string Stink::getName()const{
  return "Stink";
}
void Stink::print(ostream& out)const{
  out<<"S"<<endl;
}