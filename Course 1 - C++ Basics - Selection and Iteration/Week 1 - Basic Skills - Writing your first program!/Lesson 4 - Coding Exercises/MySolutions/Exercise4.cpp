#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    double number = atof(argv[1]);
    
    //add code below this line
    double my_double = 3.14;
    cout << my_double;
    my_double = number;
    cout << my_double;
    //add code above this line
    
    return 0;
    
}