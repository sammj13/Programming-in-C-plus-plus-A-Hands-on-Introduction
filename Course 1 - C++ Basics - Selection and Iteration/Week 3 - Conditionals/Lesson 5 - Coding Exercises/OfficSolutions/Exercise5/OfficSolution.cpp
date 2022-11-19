#include <iostream>
using namespace std;

    int main(int argc, char** argv) {
    
    string x = argv[1];
    
    //add code below this line

    /* Since we are working with strings instead of numerical values, it is best to use if and else statements with compound conditionals: */
    if ((x == "a") || (x == "e") || (x == "i") || (x == "o") || (x == "u")) {
        cout << x + " is a vowel";
    }
    else {
        cout << x + " is not a vowel";
    }
    
    //add code above this line
    
    return 0;
    
}