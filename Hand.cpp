#include "Hand.h"

// reconstruct the Hand from file
Hand::Hand(istream& in, const CardFactory* factory) {
    //to do
}

//default constructor
Hand::Hand() {}

//adds the card to the rear of the hand.
Hand& Hand::operator+=(Card* card) {
    cards.push(card);
    return *this;
}

// returns and removes the top card from the player's hand. 
Card* Hand::play() {
    if (!cards.empty()) {
        Card* top = cards.front();
        cards.pop();
        return top;
    }
    return nullptr;
}

//returns but does not remove the top card from the player's hand.
Card* Hand::top() const {
    if (!cards.empty()) {
        return cards.front();
    }
    return nullptr;
}

//returns and removes the Card at a given index.
Card* Hand::operator[](int i) {
    if (i >= 0 && i < cards.size()) {
        auto& lst = cards._Get_container();
        auto it = lst.begin();
        for (int x = 0; x < i; ++it, ++x); //Incrementing to our index i.
        Card* card = *it;
        lst.erase(it); //should compile
        return card;
    }
    return nullptr;
}