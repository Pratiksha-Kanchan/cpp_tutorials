// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    return 0;
}

// Output

// Derived Function

/*
Here, the same function print() is defined in both Base and Derived classes.

So, when we call print() from the Derived object derived1, the print() from Derived is executed by overriding the function in Base.
  
 As we can see, the function was overridden because we called the function from an object of the Derived class.

Had we called the print() function from an object of the Base class, the function would not have been overridden.

// Call function of Base class
Base base1;
base1.print(); // Output: Base Function
*/
