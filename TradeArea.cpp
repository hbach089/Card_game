#include "TradeArea.h"
#include "CardFactory.h"

TradeArea& TradeArea::operator+=(Card*card){
  clist.push_back(card);
}

TradeArea::TradeArea(istream& ipt, const CardFactory*cf){

}

bool TradeArea::legal(Card*card){
  for (auto i : clist) {
    if(card->getName()==i->getName()){
      return true;
    }
  }
  return false;
}

int TradeArea::numCards(){
  return clist.size();
}

Card* TradeArea::trade(string cname){
  //initiliaze card to remove;
  Card*remcard=nullptr;
  bool flag=false;
  list<Card*>::iterator itr=clist.begin();
  for(auto it = clist.begin(); it != clist.end(); ++it){
    if((*itr)->getName()==cname){
      clist.erase(itr);
      remcard=*itr;
      break;
    }
  }
  return remcard;
}

TradeArea& TradeArea::operator+=(Card*c){
  clist.push_back(c);
  return *this;
}

