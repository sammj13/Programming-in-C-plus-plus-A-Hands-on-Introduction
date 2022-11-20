#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

void FindAndReplace(string& lines, string burma, string myanmar) {
    // Get the first string occurrence
    size_t pos = lines.find(burma);
    // Repeat till end of string
    while( pos != string::npos) {
        // Replace this occurrence of Sub String
        lines.replace(pos, burma.size(), myanmar);
        // Get the next occurrence from the current position
        pos = lines.find(burma, pos + myanmar.size());
    }
}

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
    string path = argv[1];        //
//////////////////////////////////  
    
    //add code below this line

    /* 
     * This solution contains several steps:
     * 1. Creates a string variable lines to store the final output.
     * 2. Creates an ifstream to open and store the text file.
     * 3. Creates a string variable read to temporarily store the buffered content.
     * 4. Throws an exception if the file cannot be opened.
     * 5. Iterates through the file and stores the tokens into read with a newline delimiter.
     * 6. Stores all of the tokens into lines including the newline character.
     * 7. Closes the file.
     * 8. Performs the function FindAndReplace() on the string lines to replace Burma with Myanmar.
     * 9. Prints the final output lines.
     */
    string lines;
    
    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            lines += read + '\n';
        }
        file.close();
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }
    
    FindAndReplace(lines, "Burma", "Myanmar");
    
    cout << lines;

    //add code above this line
    
    return 0;
    
}
