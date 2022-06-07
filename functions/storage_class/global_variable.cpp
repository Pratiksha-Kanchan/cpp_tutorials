// If a variable is defined outside all functions, then it is called a global variable.

// The scope of a global variable is the whole program. This means, It can be used and changed at any part of the program after its declaration.

// Likewise, its life ends only when the program ends.

#include <iostream>
using namespace std;

// Global variable declaration
int c = 12;

void test();

int main()
{
    ++c;

    // Outputs 13
    cout << c <<endl;
    test();

    return 0;
}

void test()
{
    ++c;

    // Outputs 14
    cout << c;
}

// In the above program, c is a global variable.

// This variable is visible to both functions main() and test() in the above program.
