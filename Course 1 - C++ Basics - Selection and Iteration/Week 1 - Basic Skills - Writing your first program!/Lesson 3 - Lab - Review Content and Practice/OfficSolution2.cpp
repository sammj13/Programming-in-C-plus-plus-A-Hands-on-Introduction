#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string greeting = argv[1];
    string dayOfWeek = argv[2];
    string month = argv[3];
    int day = atoi(argv[4]);
    int currentWaitMinutes = atoi(argv[5]);
    
    //add code below this line
    cout << greeting;
    cout << " Today is ";
    cout << dayOfWeek;
    cout << ", ";
    cout << month;
    cout << " ";
    cout << day;
    cout << "." << endl;
    cout << "The current wait time is ";
    cout << currentWaitMinutes;
    cout << " minutes." << endl;
    //add code above this line
    
    return 0;
  
}