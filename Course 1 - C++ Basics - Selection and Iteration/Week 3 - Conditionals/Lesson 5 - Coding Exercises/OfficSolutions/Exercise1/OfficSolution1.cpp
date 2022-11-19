#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int x = stoi(argv[1]);
    
    //add code below this line

    /* Here is a sample solution using a single if statement and compound conditionals */
    if (((x >= 0) && (x <= 25)) || ((x >= 75) && (x <= 100))) { 
        cout << to_string(x) + " is between 0 and 25 or 75 and 100"; 
    }
    
    //add code above this line
    
    return 0;
    
}