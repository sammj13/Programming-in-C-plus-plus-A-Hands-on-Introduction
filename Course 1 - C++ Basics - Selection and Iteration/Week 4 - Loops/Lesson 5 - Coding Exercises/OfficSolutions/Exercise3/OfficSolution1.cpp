#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int a = stoi(argv[1]);
    int b = stoi(argv[2]);
    
    if (a > b) {
        int c = b;
        b = a;
        a = c;
    }
    
    //add code below this line

    /* You can use either the for or while loop to complete this assignment. 
     * If using a for loop, the iterating variable should start at a and increment by 1 until it reaches b. 
     * Below is a sample solution involving the for loop.
     */
    int sum = 0;
    
    for (int iter = a; iter <= b; iter++) {
        sum += iter;
    }
    
    if (a == b) {
        sum = a;
    }
    
    cout << sum << endl;
    
    //add code above this line
    
    return 0;
    
}
