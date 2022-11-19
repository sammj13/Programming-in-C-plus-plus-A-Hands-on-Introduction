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

    /*
     * Alternatively, you can use the while by setting the iterating value to a and increment it by 1 after each time it gets added to the sum. 
     * Here is a solution that uses the while loop: 
     */
    int sum = 0;
    int iter = a;
    
    while (iter <= b) {
        sum += iter;
        iter++;
    }
    
    if (a == b) {
        sum = a;
    }
    
    cout << sum << endl;
    
    //add code above this line
    
    return 0;
    
}
