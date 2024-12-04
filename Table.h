#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include "CardFactory.h"
#include "Player.h"
#include "DiscardPile.h"
#include "TradeArea.h"

using namespace std;

class Table {
private:
    Player* plr1;
    Player* plr2;
    DiscardPile* dp;
    TradeArea* ta; 
public:
    Table(istream&, const CardFactory*);
    bool win(std::string&);
    void printHand(bool);
    friend ostream& operator<<(ostream& out, const Table& hand);
};

//Prints everything on the table that should be visible to the players
ostream& operator<<(ostream& out, const Table& table) {
    //I am not sure if it wants us to print the entire dp or just the top 
    //bc rn dp just prints the top card on the discard pile (I think this is correct)
    out << table.plr1 << table.plr2 
    << "Discard Top Card: " << table.dp
    << "\nTrade Cards: " << table.ta << endl;
    return out;
}

#endif