#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string x = argv[1];
    
    //add code below this line

    /* if and else statements are preferred over switch-case because we are working with strings, not numbers.
     * If you wanted to use switch-case, you would need to find a way to translate the string input into a numerical value first, 
     * and then use that value as a case for your output. 
     * Here is an example: 
     */
    int num;
    if (x == "red") {
        num = 1;
    }
    else if (x == "blue") {
        num = 2;
    }
    else if (x == "yellow") {
        num = 3;
    }
    else {
        num = 0;
    }
    
    switch (num) {
        case 1: cout << x + " is a primary color"; break;
        case 2: cout << x + " is a primary color"; break;
        case 3: cout << x + " is a primary color"; break;
        default: cout << x + " is not a primary color";
    }

    //add code above this line
    
    return 0;
    
}