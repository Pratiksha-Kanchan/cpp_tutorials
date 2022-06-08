// Example 2: C++ Return Object from a Function

#include <iostream>
using namespace std;

class Student {
   public:
    double marks1, marks2;
};

// function that returns object of Student
Student createStudent() {
    Student student;

    // Initialize member variables of Student
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    // print member variables of Student
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main() {
    Student student1;

    // Call function
    student1 = createStudent();

    return 0;
}

// Output

// Marks1 = 96.5
// Marks2 = 75

/* In this program, we have created a function createStudent() that returns an object of Student class.

We have called createStudent() from the main() method.

// Call function
student1 = createStudent();

Here, we are storing the object returned by the createStudent() method in the student1.
*/
