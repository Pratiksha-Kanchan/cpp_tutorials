// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}

// Output

// int Number = 7
// double Number = 7.7

/*
In this program. we have created a class template Number with the code

template <class T>
class Number {
   private:
    T num;

   public:
    Number(T n) : num(n) {}
    T getNum() { return num; }
};

Notice that the variable num, the constructor argument n, and the function getNum() are of type T, or have a return type T. That means that they can be of any type.

In main(), we have implemented the class template by creating its objects

Number<int> numberInt(7);
Number<double> numberDouble(7.7);

Notice the codes Number<int> and Number<double> in the code above.

This creates a class definition each for int and float, which are then used accordingly.

It is compulsory to specify the type when declaring objects of class templates. Otherwise, the compiler will produce an error.

//Error
Number numberInt(7);
Number numberDouble(7.7);

*/
