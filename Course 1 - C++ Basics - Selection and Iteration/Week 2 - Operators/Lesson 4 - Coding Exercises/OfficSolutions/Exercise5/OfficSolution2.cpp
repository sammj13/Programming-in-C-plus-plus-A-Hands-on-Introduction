#include <iostream>
using namespace std;

int main() {

    string num1;
    string num2;
    cout << "Type the first whole number and then press Enter or Return: ";
    cin >> num1;
    cout << "Type the second whole number and then press Enter or Return: ";
    cin >> num1;

    //fix the code below this line

    /* Your friend is attempting to add strings, but the + operator concatenates them! 
     * To solve this, you you can also use additional <<s 
     * to separate data of different types before they are printed: */
    int sum = stoi(num1) + stoi(num2);
    cout << ( num1 + " + " + num2 + " = " ) << sum << endl;
    /* For better code output, it is recommended that the program include << endl,
     * however, it is optional. */
    
    //fix the code above this line

    return 0;

}