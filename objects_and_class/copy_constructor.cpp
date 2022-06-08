// C++ Copy Constructor

// The copy constructor in C++ is used to copy data of one object to another.

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}

// Output

// Area of Wall 1: 90.3
// Area of Wall 2: 90.3

/* In this program, we have used a copy constructor to copy the contents of one object of the Wall class to another. The code of the copy constructor is:

Wall(Wall &obj) {
  length = obj.length;
  height = obj.height;
}

Notice that the parameter of this constructor has the address of an object of the Wall class.

We then assign the values of the variables of the obj object to the corresponding variables of the object calling the copy constructor. This is how the contents of the object are copied.

In main(), we then create two objects wall1 and wall2 and then copy the contents of wall1 to wall2:

// copy contents of wall1 to wall2
Wall wall2 = wall1;

Here, the wall2 object calls its copy constructor by passing the address of the wall1 object as its argument i.e. &obj = &wall1.

Note: A constructor is primarily used to initialize objects. They are also used to run a default code when an object is created.
*/
