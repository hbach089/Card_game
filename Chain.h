#ifndef CHAIN_H
#define CHAIN_H

#include <vector>
#include <iostream>
#include "Chain_Base.h"
#include "Card.h"
#include "CardFactory.h"

using namespace std;

template <class CardType> class Chain : public Chain_Base{
    private:
        vector<CardType*> cards; // holding the cards by pointer

    public:
        Chain(istream& inp, const CardFactory* factory);
        Chain<CardType>& operator+=(Card* card); // Will add a card using push_back
        int sell() const;
        void print(ostream& out) const;

        friend ostream& operator << (ostream& out, const Chain<CardType>& chain) {
            // To do
            // The hand should print a start column with the full name of the bean, for example with four cards:
            // Red R R R R (should make this call the print function we have)
        };
};

#endif 