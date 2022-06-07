// A variable defined inside a function (defined inside function body between braces) is called a local variable or automatic variable.

// Its scope is only limited to the function where it is defined. In simple terms, local variable exists and can be accessed only inside a function.

// The life of a local variable ends (It is destroyed) when the function exits.

#include <iostream>
using namespace std;

void test();

int main() 
{
    // local variable to main()
    int var = 5;

    test();
    
    // illegal: var1 not declared inside main()
    var1 = 9;
}

void test()
{
    // local variable to test()
    int var1;
    var1 = 6;

    // illegal: var not declared inside test()
    cout << var;
}

// The variable var cannot be used inside test() and var1 cannot be used inside main() function.
