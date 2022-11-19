#include <iostream>
using namespace std;

    int main() {
    
    //add code below this line

    /* 
     * The first step is to recognize the two patterns that exist. 
     * First, the numerical values are printed in ascending order starting at 1 and ending at 5. 
     * Thus, you should implement a loop that starts and ends according to the line number (e.g. for (int i = 1; i < 6; i++)). 
     * In addition, each iteration should print the existing line number followed by a newline character (e.g. cout << i << endl;).
     * 
     * Second, the . start at 4 and then decreases by 1 after every iteration until it reaches zero. 
     * An example loop header could be for (int j = <number of periods>; j > 0; j--).
     * 
     * Now all that’s left to do is to combine the two loops into a manner that associates BOTH loops. 
     * Notice how the line number can also represent how many . are replaced. 
     * So the second loop can be rewritten as for (int j = 5 - i; j > 0; j--). 
     * Another important detail is to not include endl; when printing . because it will cause the . to be on different lines (e.g. cout << ".";). 
     * Below is a sample solution using a nested for loop but any two combinations of for and while loops will work.
     */
    for (int i = 1; i < 6; i++) {
        for (int j = 5 - i; j > 0; j--) {
            cout << ".";
        }
        cout << i << endl;
    }    

    //add code above this line
    
    return 0;
    
}
