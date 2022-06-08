/* pointers are used to store addresses rather than values.

Here is how we can declare pointers.

int *pointVar;

Here, we have declared a pointer pointVar of the int type.

We can also declare pointers in the following way.

int* pointVar; // preferred syntax

Let's take another example of declaring pointers.

int* pointVar, p;

Here, we have declared a pointer pointVar and a normal variable p.

Note: The * operator is used after the data type to declare pointers.
Assigning Addresses to Pointers

Here is how we can assign addresses to pointers:

int* pointVar, var;
var = 5;

// assign address of var to pointVar pointer
pointVar = &var;

Here, 5 is assigned to the variable var. And, the address of var is assigned to the pointVar pointer with the code pointVar = &var.
Get the Value from the Address Using Pointers

To get the value pointed by a pointer, we use the * operator. For example:

int* pointVar, var;
var = 5;

// assign address of var to pointVar
pointVar = &var;

// access value pointed by pointVar
cout << *pointVar << endl;   // Output: 5

In the above code, the address of var is assigned to pointVar. We have used the *pointVar to get the value stored in that address.

When * is used with pointers, it's called the dereference operator. It operates on a pointer and gives the value pointed by the address stored in the pointer. That is, *pointVar = var.

Note: In C++, pointVar and *pointVar is completely different. We cannot do something like *pointVar = &var;
*/


#include <iostream>
using namespace std;
int main() {
    int var = 5;

    // declare pointer variable
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print value of var
    cout << "var = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl
         << endl;

    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;

    // print the content of the address pointVar points to
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;
    
    return 0;
}

// Output

// var = 5
// Address of var (&var) = 0x61ff08

// pointVar = 0x61ff08
// Content of the address pointed to by pointVar (*pointVar) = 5
