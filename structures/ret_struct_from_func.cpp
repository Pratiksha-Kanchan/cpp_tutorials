// Returning structure from function in C++

#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    float salary;
};

Person getData(Person); 
void displayData(Person); 

int main() {

    Person p, temp;

    temp = getData(p);
    p = temp;
    displayData(p);

    return 0;
}

Person getData(Person p) {

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}

void displayData(Person p) {
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

// In this program, we have created two structure variables p and temp of type Person under the main() function.

// The structure variable p is passed to getData() function which takes input from the user which is then stored in the temp variable.

// temp = getData(p); 

// We then assign the value of temp to p.

// p = temp;

// Then the structure variable p is passed to displayData() function, which displays the information.

// Note: We don't really need to use the temp variable for most compilers and C++ versions. Instead, we can simply use the following code:

// p = getData(p); 

