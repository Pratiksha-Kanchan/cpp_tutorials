/* A constructor is a special type of member function that is called automatically when an object is created.

In C++, a constructor has the same name as that of the class and it does not have a return type. For example,

class  Wall {
  public:
    // create a constructor
    Wall() {
      // code
    }
};

Here, the function Wall() is a constructor of the class Wall. Notice that the constructor

    has the same name as the class,
    does not have a return type, and
    is public

*/

// C++ Default Constructor

// A constructor with no parameters is known as a default constructor. In the example above, Wall() is a default constructor.

// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {
  private:
    double length;

  public:
    // default constructor to initialize variable
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  Wall wall1;
  return 0;
}

// Output

// Creating a Wall
// Length = 5.5

// Here, when the wall1 object is created, the Wall() constructor is called. This sets the length variable of the object to 5.5.
