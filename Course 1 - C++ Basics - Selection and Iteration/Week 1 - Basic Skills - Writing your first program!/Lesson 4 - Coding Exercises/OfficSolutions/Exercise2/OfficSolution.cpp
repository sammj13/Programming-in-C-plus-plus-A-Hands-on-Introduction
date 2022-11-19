#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int first_num = atoi((argv[1]));
    int second_num = atoi((argv[2]));
    int third_num = atoi((argv[3]));
    
    //add code below this line

    /* You can do the declaration and initialization on the same line: */
    int my_int = first_num;
    cout << my_int << endl;
    my_int = second_num;
    cout << my_int << endl;
    my_int = third_num;
    cout << my_int << endl;
    /* You can also write the code without using << endl. */

    //add code above this line
    
    return 0;
    
}