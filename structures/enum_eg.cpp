// An enum variable takes only one value out of many possible values. Example to demonstrate it,

#include <iostream>
using namespace std;

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() 
{
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes.";   
    return 0;
}

// Output

// Size of enum variable 4 bytes.

// It's because the size of an integer is 4 bytes.;

// This makes enum a good choice to work with flags.

// You can accomplish the same task using C++ structures. However, working with enums gives you efficiency along with flexibility.
