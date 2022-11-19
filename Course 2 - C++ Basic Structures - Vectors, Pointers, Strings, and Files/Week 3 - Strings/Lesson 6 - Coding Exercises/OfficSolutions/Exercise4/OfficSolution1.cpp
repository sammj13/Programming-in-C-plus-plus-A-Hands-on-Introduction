#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    /* There are multiple ways to solve this problem. 
     * One way is to make use of two loops. 
     * First, create an integer variable to keep track of the string’s midpoint.
     * Remember that integers in C++ disregard any decimal places so 2.5 converted into an integer will be 2. 
     * Next, set up the first loop to iterate from the beginning to midpoint of the string. 
     * Then, set up the second loop to iterate through the remainder of the string. 
     * After the first loop, make sure to use a cout << endl to separate the two strings. 
     * However, this is optional for the second loop. */
    int mid = my_string.length() / 2;

    for (int i = 0; i < mid; i++) {
        cout << my_string.at(i);
    }
    cout << endl;

    for (int j = mid; j < my_string.length(); j++) {
        cout << my_string.at(j);
    }
    cout << endl;

    //add code above this line
    
    return 0;
    
}