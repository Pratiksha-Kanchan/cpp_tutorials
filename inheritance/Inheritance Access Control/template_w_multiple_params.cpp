#include <iostream>
using namespace std;

// Class template with multiple and default parameters
template <class T, class U, class V = char>
class ClassTemplate {
   private:
    T var1;
    U var2;
    V var3;

   public:
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}  // constructor

    void printVar() {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {
    // create object with int, double and char types
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // create object with int, double and bool types
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}




// Output

// obj1 values: 
// var1 = 7
// var2 = 7.7
// var3 = c

// obj2 values: 
// var1 = 8.8
// var2 = a
// var3 = 0


/*
In this program, we have created a class template, named ClassTemplate, with three parameters, with one of them being a default parameter.

template <class T, class U, class V = char>
class ClassTemplate {
  // code  
};

Notice the code class V = char. This means that V is a default parameter whose default type is char.

Inside ClassTemplate, we declare 3 variables var1, var2 and var3, each corresponding to one of the template parameters.

class ClassTemplate {
   private:
    T var1;
    U var2;
    V var3;
    ... .. ...
    ... .. ...
};

In main(), we create two objects of ClassTemplate with the code

// create object with int, double and char types
ClassTemplate<int, double> obj1(7, 7.7, 'c');

// create object with double, char and bool types
ClassTemplate<double, char, bool> obj2(8, 8.8, false);

Here,
Object
	T
	U
	V
obj1
	int
	double
	char
obj2
	double
	char
	bool

For obj1, T = int, U = double and V = char.

For obj2, T = double, U = char and V = bool.
*/
