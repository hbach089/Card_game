#include "Player.h"

Player::Player(string& name){
  this->name=name;
}

string Player::getName(){
  return this->name;
}

int Player::getNumCoins(){
  return this->coins;
}

Player& Player::operator+=(int coins){
  this->coins+=coins;
  return *this;
}

void Player::printHand(ostream& out, bool bo){
  if(bo){
    
  }
}