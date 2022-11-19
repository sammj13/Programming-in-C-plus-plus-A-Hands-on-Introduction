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

        /* To add input into the vector numList, you can use push_back().
         * Since this method is inside of the while loop, 
         * the system will keep adding doubles or ints into numList until a non-double or non-int is entered.
         */
        numList.push_back(input);

        // your code goes above
    
        cout << "Enter double or int to add to total, else find total average:" << endl;
    }
    
    // iterate through vector, add elements to total, then calculate average
    
    /* To iterate through numList, add all elements to total, 
     * and calculate the average avg, you can use a regular for loop.
     */
    for (int i = 0; i < numList.size(); i++) {
        total += numList.at(i);
        avg = total / numList.size();
    }

    // your code goes above
    
    cout << avg << endl;
    
    return 0;
  
}
