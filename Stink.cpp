#include "Stink.h"


int Stink::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 3;
  }
  else if(coins==2){
    return 5;
  }
  else if(coins==3){
    return 7;
  }
  else if(coins==4){
    return 8;
  }
}
string Stink::getName()const{
  return "Stink";
}
void Stink::print(ostream& out)const{
  out<<"S"<<endl;
}