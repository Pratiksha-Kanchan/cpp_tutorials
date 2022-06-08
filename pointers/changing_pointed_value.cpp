/* Changing Value Pointed by Pointers

If pointVar points to the address of var, we can change the value of var by using *pointVar.

For example,

int var = 5;
int* pointVar;

// assign address of var
pointVar = &var;

// change value at address pointVar
*pointVar = 1;

cout << var << endl; // Output: 1

Here, pointVar and &var have the same address, the value of var will also be changed when *pointVar is changed.
*/

#include <iostream>
using namespace std;
int main() {
    int var = 5;
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of var to 7:" << endl;

    // change value of var to 7
    var = 7;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // change value of var to 16
    *pointVar = 16;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}

// Output

// var = 5
// *pointVar = 5

// Changing value of var to 7:
// var = 7
// *pointVar = 7

// Changing value of *pointVar to 16:
// var = 16
// *pointVar = 16
