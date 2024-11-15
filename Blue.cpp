#include "Blue.h"


int Blue::getCardsPerCoin(int coins)const{
  if(coins==1){
    return 4;
  }
  else if(coins==2){
    return 6;
  }
  else if(coins==3){
    return 8;
  }
  else if(coins==4){
    return 10;
  }
}
string Blue::getName()const{
  return "Blue";
}
void Blue::print(ostream& out)const{
  out<<"B"<<endl;
}