#include "TradeArea.h"
#include "CardFactory.h"

// reconstruct the TradeArea from file. 
TradeArea::TradeArea(istream& ipt, const CardFactory*cf){
  //to do
}

TradeArea& TradeArea::operator+=(Card*card){
  clist.push_back(card);
  return *this;
}

bool TradeArea::legal(Card*card) const{
  for (const auto& i : clist) {
    if(card->getName()==i->getName()){
      return true;
    }
  }
  return false;
}

int TradeArea::numCards() const{
  return clist.size();
}

Card* TradeArea::trade(string cname){
  //initiliaze card to remove;
  Card*remcard=nullptr;
  //bool flag=false;
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