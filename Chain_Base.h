#ifndef CHAIN_BASE_H
#define CHAIN_BASE_H

#include <iostream>

using namespace std;

class Chain_Base {
    public:
        virtual void print(ostream& out) const = 0;
        // No clue if I need to add more here...
};

#endif