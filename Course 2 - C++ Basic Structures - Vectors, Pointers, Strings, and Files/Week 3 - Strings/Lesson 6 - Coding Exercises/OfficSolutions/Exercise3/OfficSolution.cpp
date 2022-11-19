#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string original = (argv[1]);
    string modified;
    char ch;
    
    //add code below this line

    /* You will need to iterate through the string in order to accomplish this exercise. 
     * First, set up an enhanced for loop that iterates through the string. 
     * The variable ch will then take on each character of the original string. 
     * Next, set up conditionals to check for the case of each ch character. 
     * Finally, direct the system to print the appropriate responses.*/
    for (char ch : original) {
        if (isupper(ch)) {
            modified += 'u';
        }
        else if (islower(ch)) {
            modified += 'l';
        }
        else {
            modified += '-';
        }
    }
        
    cout << original << endl;
    cout << modified << endl;

    //add code above this line
    
    return 0;
    
}