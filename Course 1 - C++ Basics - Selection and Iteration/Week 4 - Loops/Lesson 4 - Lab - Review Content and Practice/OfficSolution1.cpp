#include <iostream>
using namespace std;

int main() {
    
    //add code below this line

    /* The pattern can be identified as follow. 
     * There is one line of XOXOXOXOX following by two lines of OXO. 
     * Thus, we will need an outer for loop like for (int x = 0; x < 1; x++). 
     * The outer loop will only run once. 
     * On the other hand, the inner loop needs to run twice, thus something like for (int y = 0; y < 2; y++) is needed. 
     * The outer loop should print XOXOXOXOX whereas the inner loop should print OXO. 
     * However, these two nested loops will only produce the output:
     * 
     * XOXOXOXOX
     * OXO
     * OXO
     * 
     * To iterate or repeat the pattern three times, we will have to modify the outer loop to run three times instead of once. 
     * Thus, all we have to do is change the outer loop header from x < 1 to x < 3.
     * Here is one possible solution:
     */
    for (int x = 0; x < 3; x++) {
        cout << "XOXOXOXOX" << endl;
        for (int y = 0; y < 2; y++) {
            cout << "OXO" << endl;
        }
    }

    //add code above this line
    
    return 0;
    
}