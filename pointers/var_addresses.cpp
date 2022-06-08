// In C++, pointers are variables that store the memory addresses of other variables.
// Address in C++

// If we have a variable var in our program, &var will give us its address in the memory. For example,

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address of var1
    cout << "Address of var1: "<< &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
}


// Output

// Address of var1: 0x7fff5fbff8ac
// Address of var2: 0x7fff5fbff8a8
// Address of var3: 0x7fff5fbff8a4

/*
Here, 0x at the beginning represents the address is in the hexadecimal form.

Notice that the first address differs from the second by 4 bytes and the second address differs from the third by 4 bytes.

This is because the size of an int variable is 4 bytes in a 64-bit system.

Note: You may not get the same results when you run the program. */
