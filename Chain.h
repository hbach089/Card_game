#ifndef CHAIN_H
#define CHAIN_H

#include <vector>
#include <iostream>
#include "Chain_Base.h"
#include "Card.h"
#include "CardFactory.h"

using namespace std;

//Illegal Exception class
class IllegalType : public exception {
    public:
    const char* what() const {
        return "Card does not match the template type of the chain";
    }
};

template <class CardType> class Chain : public Chain_Base{
    private:
    vector<CardType*> cards; // holding the cards by pointer

    public:
    //a constructor which accepts an istream and reconstructs the chain from file when a game is resumed
    Chain(istream& inp, const CardFactory* factory) {
        //to do
    }

    //adds a card to the Chain
    Chain<CardType>& operator+=(Card* card) {
        if (dynamic_cast<CardType*>(card)) {
            cards.push_back(card);
        } else {
            throw IllegalType();
        }
        return *this;
    }

    //counts the number cards in the current chain and returns the number coins
    int sell() const {
        if (cards.empty()) return 0;
        return cards.front()->getCardsPerCoin(cards.size());
    }

    //print Chain on an std::ostream. Red R R R R
    void print(ostream& out) const { 
        if (cards.empty()) return;
        out << cards.front()->getName() << "\t"; // Bean name
        for (const auto& card : cards) { // Each bean character
            out << *card << " ";
        }
    }

    //print Chain on an std::ostream.
    friend ostream& operator << (ostream& out, const Chain<CardType>& chain) {
        chain.print(out);
        return out;
    };
};

#endif 