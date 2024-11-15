#include "Chili.h"


int Chili::getCardsPerCoin(int coins)const{
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
string Chili::getName()const{
  return "Chili";
}
void Chili::print(ostream& out)const{
  out<<"C"<<endl;
}