#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    double a;
    double b;
    double *p1;
    double *p2;
    
    cout << "Enter the first number: " << endl;
    cin >> a;
    if (!cin.good()) {
        cout << "invalid" << endl;
        exit(0);
    }
    cout << "Enter the second number: " << endl;
    cin >> b;
    if (!cin.good()) {
        cout << "invalid" << endl;
        exit(0);
    }
    
    // your code goes below

    /* It doesn’t really matter which memory address is assigned to which pointer 
     * because you only care about the pointers’ sum. 
     * However, it is important that you assign the pointers the memory address of the variables, 
     * not the variables themselves. 
     * Then all that’s left to do is to print the message "The sum is. " */
    p1 = &a;
    p2 = &b;
    
    cout << "The sum is ";

    // your code goes above
    
    cout << *p1 + *p2 << endl;
    
    return 0;
    
}