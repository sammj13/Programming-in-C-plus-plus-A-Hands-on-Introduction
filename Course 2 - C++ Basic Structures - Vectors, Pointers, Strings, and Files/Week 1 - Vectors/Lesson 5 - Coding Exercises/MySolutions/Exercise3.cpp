#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
    vector<string> reverse(0);
    reverse.push_back(argv[1]);
    reverse.push_back(argv[2]);
    reverse.push_back(argv[3]);
    
    //add code below this line

    int original = reverse.size(); //original size

    for (int i = reverse.size() - 1; i >= 0; i--) {
        reverse.push_back(reverse.at(i));
    } //add elements in reverse order to the vector
        
    for (int j = 0; j < original; j++) {
        reverse.erase(reverse.begin());
    } //remove all the original elements
    
    //add code above this line
    
    for (auto a : reverse) {
        cout << a << endl;
    }
    
    return 0;
  
}