#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
    string path = argv[1];        //
//////////////////////////////////  
    
    //add code below this line

    int numLines = 0;
    int numChars = 0;

    try {
        ifstream file;
        string read;

        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }

        while (getline(file, read)) {
            numLines++;
            numChars += read.length();
        }
        file.close();
        
        cout << numLines << " line(s)" << endl;
        cout << numChars << " character(s)" << endl;
    } catch (exception& e) {
        cerr << e.what() << endl;
    }

    //add code above this line
    
    return 0;
    
}