#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    double number = atof(argv[1]);
    
    //add code below this line

    /* You can separate your declaration and initialization onto two lines. */
    double my_double = 3.14;
    cout << my_double << endl;
    my_double = number; 
    cout << my_double << endl;
    /* You would have gotten credit for excluding the << endl commands. 
     * However, since spacing matters for the presentation of doubles, 
     * you should get into the habit of including newlines in your code. */
    
    //add code above this line
    
    return 0;
    
}