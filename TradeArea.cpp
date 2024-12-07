#include "TradeArea.h"
#include "CardFactory.h"

// reconstruct the TradeArea from file. 
TradeArea::TradeArea(istream& ipt, const CardFactory*cf){
  //to do
}

//adds the card to the trade area but it does not check if it
//is legal to place the card.
TradeArea& TradeArea::operator+=(Card*card){
  clist.push_back(card);
  return *this;
}

//returns true if the card can be legally added to the TradeArea, i.e., a
//card of the same bean is already in the TradeArea.
bool TradeArea::legal(Card*card) const{
  for (const auto& i : clist) {
    if(card->getName()==i->getName()){
      return true;
    }
  }
  return false;
}

//returns the number of cards currently in the trade area.
int TradeArea::numCards() const{
  return clist.size();
}

//removes a card of the corresponding bean name from the trade area.
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