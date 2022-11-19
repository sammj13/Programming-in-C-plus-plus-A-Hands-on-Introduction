#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    /* Alternatively, you can use a regular for to print the string squared times. 
     * This way forces you to tweak both the loop header and the conditional statement. 
     * To make things easier, first create a variable to store the string’s length. 
     * Next, start the loop at i = 1 and allow it to run until it reaches squared times plus one. 
     * Then, change the conditional statement to if (i % len == 0). 
     * This conditional is important because it enables the system to print a newline once it prints the string a len number of time. */
    int len = my_string.length();

    for (int i = 1; i < len * len + 1; i++) {
        if (i % len == 0) {
            cout << my_string << endl;
        }
        else {
            cout << my_string;
        }
    }

    //add code above this line
    
    return 0;
    
}