#include "Table.h"

//reconstruct the Table from file. 
// Table::Table(istream& input, const CardFactory* cf) {
//     //to do
// }

//Constuctor to create the table & add players
Table::Table(const std::string& player1, const std::string& player2, Deck* d) : plr1(player1), plr2(player2) {
    deck = d; //We save a pointer to the deck
 }

// returns true when a player has won. The name of the player is
// returned by reference (in the argument). The winning condition is that all cards from the deck
// must have been picked up and then the player with the most coins wins.
bool Table::win(string& name) {
    if (deck->empty()) {
        int plr1Coins = plr1.getNumCoins(), int plr2Coins = plr2.getNumCoins();
        if (plr2Coins > plr1Coins) {
            name = plr2.getName();
            return true;
        } else if (plr1Coins > plr2Coins) {
            name = plr1.getName();
            return true;
        } else {
            //Tie, doesn't set name
            return true;
        }
    }
    return false;
}

// prints the top card of the player's hand (with argument false) or all
// of the player's hand (with argument true). (For both players)
void Table::printHand(bool all) const {
    cout << "Plr1's Hand: "; plr1.printHand(cout, all);
    cout << "Plr2's Hand: "; plr2.printHand(cout, all);
}