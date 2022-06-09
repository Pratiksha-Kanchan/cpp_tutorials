// C++ Program to insert and display data entered by using pointer notation.

#include <iostream>
using namespace std;

int main() {
    float arr[5];
    
   // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {

        // store input number in arr[i]
        cin >> *(arr + i) ;

    }

    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << *(arr + i) << endl ;

    }

    return 0;
}

// Output

// Enter 5 numbers: 2.5
// 3.5
// 4.5
// 5
// 2
// Displaying data: 
// 2.5
// 3.5
// 4.5
// 5
// 2

/* Here,

    We first used the pointer notation to store the numbers entered by the user into the array arr.

    cin >> *(arr + i) ;

    This code is equivalent to the code below:

     

    cin >> arr[i];

    Notice that we haven't declared a separate pointer variable, but rather we are using the array name arr for the pointer notation.

    As we already know, the array name arr points to the first element of the array. So, we can think of arr as acting like a pointer.

    Similarly, we then used for loop to display the values of arr using pointer notation.

    cout << *(arr + i) << endl ;

    This code is equivalent to

    cout << arr[i] << endl ;

*/
