#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include "CardFactory.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"

using namespace std;

class Table {
private:
    Player plr1;
    Player plr2;
    Deck* deck;
    DiscardPile dp;
    TradeArea ta;
public:
    Table(const std::string&, const std::string&, Deck*);
    Table(istream&, const CardFactory*);
    bool win(std::string&);
    void printHand(bool) const;
    //Useful getters
    Player& getPlr1() { return plr1; }
    Player& getPlr2() { return plr2; }
    DiscardPile& getDiscardPile() { return dp; }
    TradeArea& getTradeArea() { return ta; }

    friend ostream& operator<<(ostream& out, const Table& hand);
};

//Prints everything on the table that should be visible to the players
ostream& operator<<(ostream& out, const Table& table) {
    out << "Player 1: " << &table.plr1 
    << "\nPlayer 2: " << &table.plr2 
    << "\nDiscard Top Card: " << &table.dp
    << "\nTrade Cards: " << table.ta << endl;
    return out;
}

#endif