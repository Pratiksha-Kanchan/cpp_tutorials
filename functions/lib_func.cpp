/* Library functions are the built-in functions in C++ programming.
Programmers can use library functions by invoking the functions directly; they don't need to write the functions themselves.
Some common library functions in C++ are sqrt(), abs(), isdigit(), etc.
In order to use library functions, we usually need to include the header file in which these library functions are defined.
For instance, in order to use mathematical functions such as sqrt() and abs(), we need to include the header file cmath. 

In this program, the sqrt() library function is used to calculate the square root of a number.
The function declaration of sqrt() is defined in the cmath header file. 
That's why we need to use the code #include <cmath> to use the sqrt() function.*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number, squareRoot;
    
    number = 25.0;

    // sqrt() is a library function to calculate the square root
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;

    return 0;
}
