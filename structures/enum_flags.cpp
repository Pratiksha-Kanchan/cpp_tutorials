// How to use enums for flags?
/*
Let us take an example,

enum designFlags {
	ITALICS = 1,
	BOLD = 2,
	UNDERLINE = 4
} button;

Suppose you are designing a button for Windows application. You can set flags ITALICS, BOLD and UNDERLINE to work with text.

There is a reason why all the integral constants are power of 2 in above pseudocode.

// In binary

ITALICS = 00000001
BOLD = 00000010
UNDERLINE = 00000100 */

// Since, the integral constants are power of 2, you can combine two or more flags at once without overlapping using bitwise OR | operator. This allows you to choose two or more flags at once. For example, 

#include <iostream>
using namespace std;

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main() 
{
    int myDesign = BOLD | UNDERLINE; 

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

    cout << myDesign;

    return 0;
}

// Output

// 5

// When the output is 5, you always know that bold and underline is used.

// Also, you can add flag to your requirements.

// if (myDesign & ITALICS) {
//     // code for italics
// }

// Here, we have added italics to our design. Note, only code for italics is written inside the if statement.
