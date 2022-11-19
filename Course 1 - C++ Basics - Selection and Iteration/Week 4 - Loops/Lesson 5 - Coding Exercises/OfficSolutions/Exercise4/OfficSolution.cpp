#include <iostream>
using namespace std;

int main() {

    /* 
     * The only places where you can add a break; statement to successfully print Print me! and solve the infinite loops are 
     * 1) on the line before i++; and after while (true) { and 
     * 2) on the line after cout << "Print Me!" << endl;. 
     * See solution below:
     */
    for (int i = 100; i <= 100; i--) {
        if (i == 0) {
            cout << "Print me!" << endl;
            break;
        }
        else {
            while (true) {
                break;
                i++;
                cout << "Don't print me!" << endl;
            }
        }
    }
    /* 
     * In order to print Print me!, the conditional expression of (i == 0) needs to be true. 
     * However, i starts at 100 and thus the program will execute the else condition which contains a while(true) statement. 
     * This statement causes the while loop to always run, which forces i to increment by 1 after every iteration, making it impossible for i to ever reach 0. 
     * Therefore, a break; statement is needed before i++ to prevent the while loop from incrementing i. 
     * This break; statement will cause the while loop to do nothing and exit every time it runs. 
     * Then all that’s left is to wait for the for loop to decrement i until it becomes 0 and prints Print me!. 
     * Once that happens, the other break; statement after cout << "Print me!" << endl; will force the for loop to exit and terminate the program.
     */

    return 0;

}