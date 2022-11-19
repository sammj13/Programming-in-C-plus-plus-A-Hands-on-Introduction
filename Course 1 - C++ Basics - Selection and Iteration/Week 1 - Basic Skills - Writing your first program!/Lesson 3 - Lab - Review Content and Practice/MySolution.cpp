#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string greeting = argv[1];
    string dayOfWeek = argv[2];
    string month = argv[3];
    int day = atoi(argv[4]);
    int currentWaitMinutes = atoi(argv[5]);
    
    //add code below this line
    cout << greeting << " Today is " << dayOfWeek << ", " << month << " " << day << "." << endl;
    cout << "The current wait time is " << currentWaitMinutes << " minutes.";
    //add code above this line
    
    return 0;
    
}
