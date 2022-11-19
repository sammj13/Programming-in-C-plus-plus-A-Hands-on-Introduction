#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    
    double input;
    double total = 0;
    double avg = 0;
    vector<double> numList(0);
    
    cout << "Enter double or int to add to total, else find total average:" << endl;
    while (cin >> input) {

        // add input into vector

        numList.push_back(input);

        // your code goes above
    
        cout << "Enter double or int to add to total, else find total average:" << endl;
    }
    
    // iterate through vector, add elements to total, then calculate average

    for (auto num : numList) {
        total += num;
    }

    if (total != 0) {
        avg = total / numList.size();
    }
    
    // your code goes above
    
    cout << avg << endl;
    
    return 0;
  
}