// Simple Calculator Using Class Templates

// This program uses a class template to perform addition, subtraction, multiplication and division of two variables num1 and num2.

// The variables can be of any type, though we have only used int and float types in this example.

#include <iostream>
using namespace std;

template <class T>
class Calculator {
   private:
    T num1, num2;

   public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    Calculator<int> intCalc(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);

    cout << "Int results:" << endl;
    intCalc.displayResult();

    cout << endl
         << "Float results:" << endl;
    floatCalc.displayResult();

    return 0;
}

// Output

// Int results:
// Numbers: 2 and 1.
// 2 + 1 = 3
// 2 - 1 = 1
// 2 * 1 = 2
// 2 / 1 = 2

// Float results:
// Numbers: 2.4 and 1.2.
// 2.4 + 1.2 = 3.6
// 2.4 - 1.2 = 1.2
// 2.4 * 1.2 = 2.88
// 2.4 / 1.2 = 2

/*
In the above program, we have declared a class template Calculator.

The class contains two private members of type T: num1 & num2, and a constructor to initialize the members.

We also have add(), subtract(), multiply(), and divide() functions that have the return type T. We also have a void function displayResult() that prints out the results of the other functions.

In main(), we have created two objects of Calculator: one for int data type and another for float data type.

Calculator<int> intCalc(2, 1);
Calculator<float> floatCalc(2.4, 1.2);

This prompts the compiler to create two class definitions for the respective data types during compilation.
*/
