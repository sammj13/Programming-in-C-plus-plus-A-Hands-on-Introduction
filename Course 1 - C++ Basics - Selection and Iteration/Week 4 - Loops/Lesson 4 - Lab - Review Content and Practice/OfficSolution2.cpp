#include <iostream>
using namespace std;

int main() {
    
    //add code below this line

    /* Alternatively, if you don’t want to modify the existing nested loops, you can nest them inside another loop that runs three times. 
     * Here is another potential solution:
     */
    for (int z = 0; z < 3; z++) {
        for (int x = 0; x < 1; x++) {
            cout << "XOXOXOXOX" << endl;
            for (int y = 0; y < 2; y++) {
                cout << "OXO" << endl;
            }
        }
    }
    /* Note that the outermost loop for (int z = 0; z < 3; z++) doesn’t actually produce any output, 
     * it just runs three times, causing the identified pattern to print three times as well.
     */

    //add code above this line
    
    return 0;
    
}