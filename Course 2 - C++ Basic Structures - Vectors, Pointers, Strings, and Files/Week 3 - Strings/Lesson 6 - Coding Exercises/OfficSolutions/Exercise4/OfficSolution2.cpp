#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    /* Alternatively, you can use substr() to print a partial copy of the string twice. 
     * The first part of the string starts from index 0 to before mid and 
     * the second part starts from mid to the end of the string. 
     * Again, the second endl is optional. */

    int mid = my_string.length() / 2;

    cout << my_string.substr(0, mid) << endl;
    cout << my_string.substr(mid) << endl;

    //add code above this line
    
    return 0;
    
}