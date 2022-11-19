#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int a = atoi((argv[1]));
    int b = atoi((argv[2]));
    int *p1 = &a;
    int *p2 = &b;
    
    //add code below this line

    if (*p1 > *p2) {
        cout << "The larger number is " << *p1 << endl;
    } else if (*p1 < *p2) {
        cout << "The larger number is " << *p2 << endl;
    } else {
        cout << "Neither number is larger" << endl;
    }
    
    //add code above this line
    
    return 0;
    
}