#include "Player.h"

//constructor that creates a Player with a given name. 
Player::Player(const string& n){
  name = n;
  coins = 0;
  maxNumOfChains = 2;
}

//reconstruct the Player from file.
Player::Player(istream& input, const CardFactory* factory) {
  //to do
}

//get the name of the player
string Player::getName() const{
  return name;
}

//Returns the player's hand
Hand& Player::getHand() {
  return hand;
}

//get the number of coins currently held by the player.
int Player::getNumCoins() const{
  return coins;
}

//add a number of coins 
Player& Player::operator+=(int c){
  coins += c;
  return *this;
}

//returns either 2 or 3.
int Player::getMaxNumChains() const {
  return maxNumOfChains;
}

//returns the number of non-zero chains
int Player::getNumChains() const {
  return chains.size();
}

//returns the chain at position i.
Chain<Card>& Player::operator[](int i) {
  if (i >= 0 && i < chains.size()) {
    return *chains[i];
  }
}

//adds an empty third chain to the player for three coins. The
//functions reduces the coin count for the player by two. If the player does not have enough coins
//then an exception NotEnoughCoins is thrown.
void Player::buyThirdChain() {
  if (maxNumOfChains == 3) return; //Making sure they cannot buy again.
  if (coins < 3) {
    throw NotEnoughCoins();
  }
  coins -= 3;
  maxNumOfChains++;
}

//prints the top card of the player's hand (with argument false) or all of the player's hand (with argument true) to the supplied ostream.
void Player::printHand(ostream& out, bool all) const {
  //to do, Idk where to put/get the hand/deck yet!
  if(all){
    //Entire hand
    out << hand;
  } else {
    //Top card
    out << hand.top();
  }
}