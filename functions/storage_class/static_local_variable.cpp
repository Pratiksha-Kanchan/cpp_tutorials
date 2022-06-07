// Keyword static is used for specifying a static variable. For example:

// ... .. ...
// int main()
// {
//    static float a;
//    ... .. ...
// }

// A static local variable exists only inside a function where it is declared (similar to a local variable) but its lifetime starts when the function is called and ends only when the program ends.

// The main difference between local variable and static variable is that, the value of static variable persists the end of the program.


#include <iostream>
using namespace std;

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{
    
    test();
    test();

    return 0;
}


// In the above program, test() function is invoked 2 times.

// During the first call, variable var is declared as static variable and initialized to 0. Then 1 is added to var which is displayed in the screen.

// When the function test() returns, variable var still exists because it is a static variable.

// During second function call, no new variable var is created. The same var is increased by 1 and then displayed to the screen.
