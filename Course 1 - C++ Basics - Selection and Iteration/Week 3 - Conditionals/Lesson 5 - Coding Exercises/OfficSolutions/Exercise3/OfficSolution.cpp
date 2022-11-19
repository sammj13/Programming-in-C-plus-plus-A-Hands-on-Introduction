#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int x = stoi(argv[1]);
    
    //add code below this line

    /* You can use a single set of if and else statements with compound conditionals to complete this exercise. */
    if ((x % 5 == 0) && (x % 2 == 0)) { 
        cout << to_string(x) + " is divisible by 5 and even";
    }
    else {
        cout << to_string(x) + " is not divisible by 5 or it is odd";
    }

    //add code above this line
    
    return 0;
    
}