#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    char first = my_string[0];
    char last = my_string[my_string.length() - 1];

    cout << first << " is the first character and " << last << " is the last character" << endl;

    //add code above this line
    
    return 0;
    
}