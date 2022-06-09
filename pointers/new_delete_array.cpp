// C++ new and delete Operator for Arrays


// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  float* ptr;
    
  // memory allocation of num number of floats
  ptr = new float[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}


// Output

// Enter total number of students: 4
// Enter GPA of students.
// Student1: 3.6
// Student2: 3.1
// Student3: 3.9
// Student4: 2.9

// Displaying GPA of students.
// Student1: 3.6
// Student2: 3.1
// Student3: 3.9
// Student4: 2.9

/*
In this program, we have asked the user to enter the number of students and store it in the num variable.

Then, we have allocated the memory dynamically for the float array using new.

We enter data into the array (and later print them) using pointer notation.

After we no longer need the array, we deallocate the array memory using the code delete[] ptr;.

Notice the use of [] after delete. We use the square brackets [] in order to denote that the memory deallocation is that of an array.

*/
