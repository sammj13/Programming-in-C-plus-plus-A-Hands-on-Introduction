#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    char ch;
    
    //add code below this line

    /* The first task is to iterate through my_string 
     * to check to see if any of its characters matches any of the vowels. 
     * Here, both a regular for loop and an enhanced for loop will work. 
     * Since we are working with character counts, 
     * the == operator should be used instead of the find_first_of() method.
     * 
     * Note that the ch = my_string.at(i); 
     * is optional but it will be helpful in shortening the code for our compound conditional statement when using a regular for loop. 
     * However, the enhanced for loop will result in fewer lines of code. */

    for (char ch : my_string) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u' || ch == 'A' ||
            ch == 'E' || ch == 'I' || ch == 'O' ||
            ch == 'U') {
            cout << '*';
        }
        else {
            cout << ch;
        }
    }

    //add code above this line
    
    return 0;
    
}