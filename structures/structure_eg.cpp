// Example: C++ Structure

// C++ Program to assign data to members of a structure variable and display it.

#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}

// Output

// Enter Full name: Magdalena Dankova
// Enter age: 27
// Enter salary: 1024.4

// Displaying Information.
// Name: Magdalena Dankova
// Age: 27
// Salary: 1024.4

// Here a structure Person is declared which has three members name, age and salary.

// Inside main() function, a structure variable p1 is defined. Then, the user is asked to enter information and data entered by user is displayed.
