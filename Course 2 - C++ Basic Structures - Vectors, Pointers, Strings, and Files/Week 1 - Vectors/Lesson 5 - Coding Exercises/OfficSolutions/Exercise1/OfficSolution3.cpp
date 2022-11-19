#include <iostream>
using namespace std;

int main() {
  
    string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
    //add code below this line
  
    /* You can use a regular for loop */
    for (int i = 0; i < sizeof(oceans)/sizeof(oceans[0]); i++) {
        cout << oceans[i] << endl;
    }
    
    //add code above this line
  
    return 0;
  
}