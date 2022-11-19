#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int month = stoi(argv[1]);
    
    //add code below this line
    switch (month) {
        case 1: cout << "January" << endl;
                break;
        case 2: cout << "February" << endl;
                break;
        case 3: cout << "March" << endl;
                break;
        case 4: cout << "April" << endl;
                break;
        case 5: cout << "May" << endl;
                break;
        case 6: cout << "June" << endl;
                break;
        case 7: cout << "July" << endl;
                break;
        case 8: cout << "August" << endl;
                break;
        case 9: cout << "September" << endl;
                break;
        case 10: cout << "October" << endl;
                break;
        case 11: cout << "November" << endl;
                break;
        case 12: cout << "December" << endl;
                break;
        default: cout << "Invalid value" << endl;
                break;
    }
    //add code above this line
    
    return 0;
    
}