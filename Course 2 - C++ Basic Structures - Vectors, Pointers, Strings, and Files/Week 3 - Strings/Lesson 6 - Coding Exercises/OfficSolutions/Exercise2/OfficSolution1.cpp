#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    /* One possible solution is to use a nested for loop. 
     * Both inner and outer loops will run for the duration of the string’s length.
     * However, it is important to note when to print the string with a newline and when to not.
     * When j reaches the end of the string, direct the system to print the string with a newline; 
     * otherwise, just print the string by itself. */
    for (int i = 0; i < my_string.length(); i++) {
        for (int j = 0; j < my_string.length(); j++) {
            if (j == my_string.length()-1) {
                cout << my_string << endl;
            }
            else {
                cout << my_string;
            }
        }
    }

    //add code above this line
    
    return 0;
    
}