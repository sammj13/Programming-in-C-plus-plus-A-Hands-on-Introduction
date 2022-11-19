#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line
    
    for (int i = 1; i < my_string.length(); i += 2) {
        cout << my_string[i] << my_string[i - 1];
    }

    //add code above this line
    
    return 0;
    
}