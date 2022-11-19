#include <iostream>
using namespace std;

    int main() {
    
    //add code below this line

    for (int i = 1; i <= 5; i++) {
        int count = 5;
        while (count > i) {
            cout << '.';
            count--;
        }
        cout << i << endl;
    }
    
    //add code above this line
    
    return 0;
    
}
