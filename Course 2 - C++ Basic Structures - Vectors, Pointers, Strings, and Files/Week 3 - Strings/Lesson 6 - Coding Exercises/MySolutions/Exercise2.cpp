#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    for (int i = 0; i < my_string.length(); i++) {
        for (int j = 0; j < my_string.length(); j++) {
        cout << my_string;
        }
        cout << endl;
    }

    //add code above this line
    
    return 0;
    
}