#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string original = (argv[1]);
    string modified;
    char ch;
    
    //add code below this line

    for (char c : original) {
        if (islower(c)) {
        ch = 'l';
        } else if (isupper(c)) {
        ch = 'u';
        } else {
        ch = '-';
        }

        modified += ch;
    }

    cout << original << endl;
    cout << modified << endl;

    //add code above this line
    
    return 0;
    
}