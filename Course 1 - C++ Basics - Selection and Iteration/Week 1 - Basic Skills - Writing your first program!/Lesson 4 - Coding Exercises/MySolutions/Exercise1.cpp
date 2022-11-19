#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    bool test = atoi((argv[1]));
    
    //add code below this line
    bool my_bool = true;
    cout << my_bool;
    my_bool = test;
    cout << my_bool;
    //add code above this line
    
    return 0;

}