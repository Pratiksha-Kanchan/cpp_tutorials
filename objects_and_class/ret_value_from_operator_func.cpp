#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public
       :
    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    Count operator ++ () {
        Count temp;

        // Here, value is the value attribute of the calling object
        temp.value = ++value;

        return temp;
    }

    // Overload ++ when used as postfix
    Count operator ++ (int) {
        Count temp;

        // Here, value is the value attribute of the calling object
        temp.value = value++;

        return temp;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1, result;

    // Call the "Count operator ++ ()" function
    result = ++count1;
    result.display();

    // Call the "Count operator ++ (int)" function
    result = count1++;
    result.display();

    return 0;
}

// Output

// Count: 6
// Count: 6

/*
Here, we have used the following code for prefix operator overloading:

// Overload ++ when used as prefix
Count operator ++ () {
    Count temp;

    // Here, value is the value attribute of the calling object
    temp.value = ++value;

    return temp;
}

The code for the postfix operator overloading is also similar. Notice that we have created an object temp and returned its value to the operator function.

Also, notice the code

temp.value = ++value; 

The variable value belongs to the count1 object in main() because count1 is calling the function, while temp.value belongs to the temp object.
*/
