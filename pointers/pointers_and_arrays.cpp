// C++ Program to display address of each element of an array 

#include <iostream>
using namespace std;

int main()
{
    float arr[3];

    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}

// Output

// Displaying address using arrays: 
// &arr[0] = 0x61fef0
// &arr[1] = 0x61fef4
// &arr[2] = 0x61fef8

// Displaying address using pointers: 
// ptr + 0 = 0x61fef0
// ptr + 1 = 0x61fef4
// ptr + 2 = 0x61fef8

/*

In the above program, we first simply printed the addresses of the array elements without using the pointer variable ptr.

Then, we used the pointer ptr to point to the address of a[0], ptr + 1 to point to the address of a[1], and so on.

In most contexts, array names decay to pointers. In simple words, array names are converted to pointers. That's the reason why we can use pointers to access elements of arrays.

However, we should remember that pointers and arrays are not the same.
*/
