#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
    vector<string> reverse(0);
    reverse.push_back(argv[1]);
    reverse.push_back(argv[2]);
    reverse.push_back(argv[3]);
    
    //add code below this line

    /* There are so many different ways to approach this problem. 
     * One solution is to add the arguments in reverse order into the vector. 
     * This will cause the vector to hold six elements where the last three elements is the reverse of the first three. 
     * Then, all that’s left to do is to remove the first three elements. 
     * Now you have a reversed vector.
     */
    reverse.push_back(argv[3]);
    reverse.push_back(argv[2]);
    reverse.push_back(argv[1]);
    reverse.erase(reverse.begin());
    reverse.erase(reverse.begin());
    reverse.erase(reverse.begin());
    
    //add code above this line
    
    for (auto a : reverse) {
        cout << a << endl;
    }
    
    return 0;
  
}