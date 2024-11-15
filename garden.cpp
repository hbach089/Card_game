#include "garden.h"


int garden::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 0;
  }
  else if(coins==2){
    return 2;
  }
  else if(coins==3){
    return 3;
  }
  else if(coins==4){
    return 0;
  }
}
string garden::getName()const{
  return "garden";
}
void garden::print(ostream& out)const{
  out<<"g"<<endl;
}