#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    char ch;
    
    //add code below this line

    string new_string;

    for (char c : my_string) {
        ch = c;
        if (ch == 'a' || ch == 'A' ||
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U') {
            ch = '*';
        }
        cout << ch;
    }

    //add code above this line
    
    return 0;
    
}