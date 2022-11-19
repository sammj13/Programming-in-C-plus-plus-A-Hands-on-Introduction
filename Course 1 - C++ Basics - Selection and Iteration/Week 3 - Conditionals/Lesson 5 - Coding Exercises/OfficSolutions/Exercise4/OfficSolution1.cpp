#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string x = argv[1];
    
    //add code below this line

    /* One way is to use compound conditionals with if and else statements: */
    if ((x == "red") || (x == "blue") || (x == "yellow")) {
        cout << x + " is a primary color";
    }
    else {
        cout << x + " is not a primary color";
    }

    //add code above this line
    
    return 0;
    
}