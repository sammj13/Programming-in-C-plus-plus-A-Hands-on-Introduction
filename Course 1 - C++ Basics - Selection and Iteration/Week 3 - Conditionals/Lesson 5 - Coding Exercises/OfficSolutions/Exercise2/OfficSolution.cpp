#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int x = stoi(argv[1]);
    
    //add code below this line

    /* A single set of if and else statements can be used to solve this exercise. 
     * The real trick is remembering that modulo % is the correct operator to check for divisibility.
     */
    if (x % 5 == 0) { 
        cout << to_string(x) + " is divisible by 5";
    }
    else {
        cout << to_string(x) + " is not divisible by 5";
    }

    //add code above this line
    
    return 0;
    
}