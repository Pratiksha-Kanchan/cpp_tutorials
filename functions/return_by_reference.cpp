// In C++ Programming, not only can you pass values by reference to a function but you can also return a value by reference.
  
#include <iostream>
using namespace std;

// global variable
int num;

// function declaration
int& test();

int main() {

  // assign 5 to num variable
  // equivalent to num = 5;
  test() = 5;

  cout << num;

  return 0;
}

// function definition
// returns the address of num variable
int& test() {
  return num;
}

/* In program above, the return type of function test() is int&. Hence, this function returns a reference of the variable num.
  
The return statement is return num;. Unlike return by value, this statement doesn't return value of num, instead it returns the variable itself (address).

So, when the variable is returned, it can be assigned a value as done in test() = 5;

This stores 5 to the variable num, which is displayed onto the screen.*/


// Important Things to Remember When Returning by Reference.

//     Ordinary function returns value but this function doesn't. Hence, you cannot return a constant from the function.

//     You cannot return a local variable from this function. 
