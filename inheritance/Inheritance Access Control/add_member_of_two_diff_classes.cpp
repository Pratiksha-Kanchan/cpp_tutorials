// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    
    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
        
    private:
        int numA;
        
         // friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}
    
    private:
        int numB;
 
        // friend function declaration
        friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}

// Output

// Sum: 13

/*
In this program, ClassA and ClassB have declared add() as a friend function. Thus, this function can access private data of both classes.

One thing to notice here is the friend function inside ClassA is using the ClassB. However, we haven't defined ClassB at this point.

// inside classA 
friend int add(ClassA, ClassB);

For this to work, we need a forward declaration of ClassB in our program.

// forward declaration
class ClassB;
*/
