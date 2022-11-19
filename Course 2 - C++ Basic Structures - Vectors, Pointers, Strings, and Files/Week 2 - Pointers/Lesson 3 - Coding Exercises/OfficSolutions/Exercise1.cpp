#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int a = atoi((argv[1]));
    int b = atoi((argv[2]));
    int *p1 = &a;
    int *p2 = &b;
    
    //add code below this line

    /* In order to print the appropriate responses, 
     * you may need to set up conditionals that compare *p1 and *p2. 
     * If *p1 is larger, print *p1. If *p2 is larger, print *p2. 
     * Otherwise, print Neither number is larger.*/
    if (*p1 > *p2) {
        cout << "The larger number is " << *p1 << endl;
    }
    
    else if (*p1 < *p2) {
        cout << "The larger number is " << *p2 << endl;
    }
    
    else {
        cout << "Neither number is larger" << endl;
    }
    
    //add code above this line
    
    return 0;
    
}