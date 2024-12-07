#include <iostream>
#include <fstream>
#include <string>
#include "Table.h"
#include "CardFactory.h"

using namespace std;

int main() {
    int choice;
    // we get player's choice to start or load
    cout << "1: Start New Game\n2:Load From File" << endl;
    cin >> choice;

    //initializing the table and the factory
    Table* table = nullptr;
    CardFactory* cf = CardFactory::getFactory(); //we get the static factory here & the shuffled deck

    if (choice == 1) {
        string plr1, plr2;
        //Taking the player's names
        cout << "Player 1 Name: ";
        cin >> plr1;
        cout << "Player 2 Name: ";
        cin >> plr2;

        table = new Table(plr1, plr2, &cf->getDeck()); //idk if I need to do this yet!

        //Drawing 5 cards for each player
        for (int i = 0; i < 5; ++i) {
            table->getPlr1().getHand() += cf->getDeck().draw();
            table->getPlr2().getHand() += cf->getDeck().draw();
        }
    } else if (choice == 2) {
        //Load from file here
        //not done*
        ifstream saveFile("savegame.txt");
        if (!saveFile) {
            cout << "File not found" << endl;
            return main(); //relaunches the program
        }
        saveFile.close();
    } else {
        delete cf;
        return 0;
    }

    //As long as the deck is not empty
    while (!cf->getDeck().empty()) {
        //Saving option
        char p;
        cout << "type 'p' to pause & save or anything else to continue playing";
        cin >> p;
        if (p == 'p' || p == 'P') {
            // Saving game to file here
            break;
        }

        //for every player:
        for (int i = 0; i < 2; i++) {
            Player& currentPlayer = (i == 0) ? table->getPlr1() : table->getPlr2();
            //Display Table
            cout << table;

            //Player draws top card from Deck 
            currentPlayer.getHand() += cf->getDeck().draw();

            //If TradeArea is not empty
            if (table->getTradeArea().numCards() != 0) {
                //Add bean cards from the TradeArea to chains or discard them.
                //not done*
            }

            //Play topmost card from Hand. 
            Card* topCard = currentPlayer.getHand().play();
            //If we can chain, then we add it, else we add the card to the discard pile
            //not done*

            //If chain is ended, cards for chain are removed and player receives coin(s).
            //(so if chain is full, then we use the sell() func from chain) & += to player to give them money
            //not done*

            //If player decides to
            //Play the now topmost card from Hand. 
            char choice;
            cout << "Do you want to play your topmost card? (y/n) ";
            cin >> choice;
            if (choice == 'y' || choice == 'Y') {
                Card* topCard = currentPlayer.getHand().play();
                //If we can chain, then we add it, else we add the card to the discard pile
                //not done*
            }

            //If chain is ended, cards for chain are removed and player receives coin(s). (Again?)
            //not done*

            //If player decides to:
            //Show the player's full hand 
            cout << currentPlayer.getHand();
            //and player selects an arbitrary card Discard the arbitrary card from the player's hand and place it on the discard pile.
            char choice2;
            cout << "Do you want to discard a card? (y/n) ";
            cin >> choice2;
            if (choice2 == 'y' || choice2 == 'Y') {
                int index;
                cout << "Select a card index to discard: ";
                cin >> index;
                Card* discardedCard = currentPlayer.getHand()[index];
                table->getDiscardPile() += discardedCard;
            }
            
            //Draw three cards from the deck and place cards in the trade area
            for (int i = 0; i < 3; ++i) {
                if (!cf->getDeck().empty()) {
                    table->getTradeArea() += cf->getDeck().draw();
                }
            }

            //while top card of discard pile matches an existing card in the trade area
            //draw the top-most card from the discard pile and place it in the trade area
            while (table->getTradeArea().legal(table->getDiscardPile().top())) {
                table->getTradeArea() += table->getDiscardPile().pickUp();
            }

            //for all cards in the trade area
            // if player wants to chain the card
            // chain the card.
            // else
            // card remains in trade area for the next player.
            for (Card* card : table->getTradeArea().getCards()) {
                char choice3;
                cout << "Do you want to chain the following card from the trade area: (y/n)";
                cin >> choice3;
                if (choice3 == 'y' || choice3 == 'Y') {
                    // chain the card.
                    //not done*
                    //and remove it from the trade area using TradeArea::trade
                }
            }
            
            //Draw two cards from Deck and add the cards to the player's hand (at the back).
            for (int i = 0; i < 2; ++i) {
                if (!cf->getDeck().empty()) {
                    currentPlayer.getHand() += cf->getDeck().draw();
                }
            }
        }
    }

    //Getting the winner
    string winner;
    if (table->win(winner)) {
        cout << "The winner is: " << winner << endl;
    } else {
        cout << "Game ended in a draw." << endl;
    }

    delete cf; //deleting the card factory
    return 0;
}