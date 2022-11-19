#include <iostream>
#include <vector>
using namespace std;

int main() {
  
    vector<string> oceans(0);
    
    //add code below this line

    oceans.push_back("Pacific");
    oceans.push_back("Indian");
    oceans.pop_back();
    oceans.push_back("Atlantic");
    oceans.push_back("Pacific");
    oceans.at(2) = "Indian";
    oceans.push_back("Arctic");
    oceans.push_back("Southern");
    
    //add code above this line
    
    for (auto a : oceans) {
        cout << a << endl;
    }
    
    return 0;
  
}