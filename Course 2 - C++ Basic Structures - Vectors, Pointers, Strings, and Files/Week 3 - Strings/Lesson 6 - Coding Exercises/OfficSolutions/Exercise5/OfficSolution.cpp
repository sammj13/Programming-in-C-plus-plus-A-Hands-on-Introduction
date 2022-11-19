#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    /* One way to solve this problem is to set up conditionals. 
     * The conditionals will check to see if the index is divisible by 2 or not. 
     * If it is divisible by 2, the system will print the next character in the string. 
     * If not, then the system will print the previous character. */
    for (int i = 0; i < my_string.length(); i++) {
        if (i % 2 == 0) {
            cout << my_string.at(i + 1);
        }
        else {
            cout << my_string.at(i - 1);
        }
    }

    //add code above this line
    
    return 0;
    
}