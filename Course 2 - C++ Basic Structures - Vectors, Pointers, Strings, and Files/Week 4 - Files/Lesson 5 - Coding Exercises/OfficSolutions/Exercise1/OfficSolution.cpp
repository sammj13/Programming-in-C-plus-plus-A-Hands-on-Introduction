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

    /* 
     * Guide:
     * 1. Create an ifstream object to open the file.
     * 2. Create a string read to store buffered data.
     * 3. Create 2 ints to keep track of the number of lines and characters.
     * 4. Iterate through the file and increment the number of lines by 1 every time a line is read; also increment the number of characters by the length of the line (which is also the number of characters).
     * 5. Print the appropriate results in the specified format.
     */
    try {
        ifstream file;
        string read;
        int lines = 0;
        int chars = 0;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            lines++;
            chars += read.length();
        }
        file.close();
        cout << lines << " line(s)" << endl;
        cout << chars << " character(s)"; 
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }

    //add code above this line
    
    return 0;
    
}