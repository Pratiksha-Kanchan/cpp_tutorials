/* Operator Overloading in Binary Operators

Binary operators work on two operands. For example,

result = num + 9;

Here, + is a binary operator that works on the operands num and 9.

When we overload the binary operator for user-defined types by using the code:

obj3 = obj1 + obj2;

The operator function is called using the obj1 object and obj2 is passed as an argument to the function.
*/



// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = complex1 + complex2;
    result.output();

    return 0;
}


// Output

// Enter first complex number:
// Enter real and imaginary parts respectively: 9 5
// Enter second complex number:
// Enter real and imaginary parts respectively: 7 6
// Output Complex number: 16+11i


/* 
In this program, the operator function is:

Complex operator + (const Complex& obj) {
    // code
}

Instead of this, we also could have written this function like:

Complex operator + (Complex obj) {
    // code
}

However,

    using & makes our code efficient by referencing the complex2 object instead of making a duplicate object inside the operator function.
    using const is considered a good practice because it prevents the operator function from modifying complex2.

*/

/*
// Things to Remember in C++ Operator Overloading

    Two operators = and & are already overloaded by default in C++. For example, to copy objects of the same class, we can directly use the = operator. We do not need to create an operator function.
    Operator overloading cannot change the precedence and associativity of operators. However, if we want to change the order of evaluation, parentheses should be used.
    There are 4 operators that cannot be overloaded in C++. They are:
        :: (scope resolution)
        . (member selection)
        .* (member selection through pointer to function)
        ?: (ternary operator)

*/
