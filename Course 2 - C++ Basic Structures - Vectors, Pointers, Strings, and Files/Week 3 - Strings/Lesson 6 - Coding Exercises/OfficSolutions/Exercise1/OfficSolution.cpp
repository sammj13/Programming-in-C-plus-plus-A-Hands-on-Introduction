#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    /* In order to get the first and last character of the string, 
     * you’ll need to access the string’s indices. 
     * You can do this by using the at() function. 
     * Remember that at(0) returns the first character of a string. 
     * Another key point is to use my_string.length()-1 
     * because that enables you to access the last character of the string. 
     * Finally, all that’s left is to print the appropriate responses.*/
    char first = my_string.at(0);
    char last = my_string.at(my_string.length()-1);

    cout << first << " is the first character and " << last << " is the last character" << endl;

    //add code above this line
    
    return 0;
    
}