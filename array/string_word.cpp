// Example 1: C++ String to read a word

// C++ program to display a string entered by user.

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;

    return 0;
}

// Output

// Enter a string: C++
// You entered: C++

// Enter another string: Programming is fun.
// You entered: Programming


/*
Notice that, in the second example only "Programming" is displayed instead of "Programming is fun".

This is because the extraction operator >> works as scanf() in C and considers a space " " has a terminating character. */
