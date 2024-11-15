#include "Red.h"


int Red::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 2;
  }
  else if(coins==2){
    return 3;
  }
  else if(coins==3){
    return 4;
  }
  else if(coins==4){
    return 5;
  }
}
string Red::getName()const{
  return "Red";
}
void Red::print(ostream& out)const{
  out<<"R"<<endl;
}