#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line
    
    int half_idx = my_string.length() / 2;

    for (int i = 0; i < my_string.length(); i++) {
        if (i == half_idx) {
        cout << endl;
        }
        cout << my_string[i];
    }

    //add code above this line
    
    return 0;
    
}