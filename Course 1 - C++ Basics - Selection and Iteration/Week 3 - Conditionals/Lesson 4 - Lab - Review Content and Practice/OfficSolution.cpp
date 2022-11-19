#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int month = stoi(argv[1]);
    
    //add code below this line

    /* Below is one sample solution that uses a switch case statement. */
    string monthString;
    switch (month) {
        case 1:  monthString = "January"; break;
        case 2:  monthString = "February"; break;
        case 3:  monthString = "March"; break;
        case 4:  monthString = "April"; break;
        case 5:  monthString = "May"; break;
        case 6:  monthString = "June"; break;
        case 7:  monthString = "July"; break;
        case 8:  monthString = "August"; break;
        case 9:  monthString = "September"; break;
        case 10: monthString = "October"; break;
        case 11: monthString = "November"; break;
        case 12: monthString = "December"; break;
        default: monthString = "Invalid month";
    }
    cout << monthString << endl;
    /* You could have also used either the if or if-else statements too! */

    //add code above this line
    
    return 0;
    
}