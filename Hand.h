#ifndef HAND_H
#define HAND_H

#include <queue>
#include <list>
#include <iostream>
#include "Card.h"
#include "CardFactory.h"

using namespace std;

class Hand{
    private:
    queue<Card*, list<Card*>> cards; //we can use a std::list to remove at an arbitrary location efficiently with a std::queue adapter.
    public:
    Hand(istream&, const CardFactory*);
    Hand& operator+=(Card* card);
    Card* play();
    Card* top() const;
    Card* operator[](int);
    friend ostream& operator<<(ostream& out, const Hand& hand);
};

//Printing all the cards in order.
ostream& operator<<(ostream& out, const Hand& hand) {
    for (const auto& card : hand.cards._Get_container()) {
        out << *card << " ";
    }
    return out;
}

#endif 