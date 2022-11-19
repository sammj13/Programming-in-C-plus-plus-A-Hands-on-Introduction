#include <iostream>
using namespace std;

int main() {

    int age1 = 12;
    int age2 = 31;
    int age3 = 29;
    int* amy;
    int* bob;
    int** carol;
    
    //add code below this line

    /* The first step is to associate the pointers to their appropriate variables. 
     * For example, amy is assigned &age1 and bob is assigned &age2. 
     * You cannot assign &age3 to carol because carol is a pointer to a pointer, 
     * so you will have to create a place holder pointer (i.e. int* p = &age3). 
     * Then you can point carol to &p. 
     * After that, just dereference the pointers to print their values. */
    amy = &age1;
    bob = &age2;
    
    int* p = &age3;
    carol = &p;
    
    cout << "Amy's age is: ";
    cout << *amy << endl; //do not edit
    cout << "Bob's age is: ";
    cout << *bob << endl; //do not edit
    cout << "Carol's age is: ";
    cout << **carol << endl; //do not edit
    
    //add code above this line 
    
    return 0;
    
}