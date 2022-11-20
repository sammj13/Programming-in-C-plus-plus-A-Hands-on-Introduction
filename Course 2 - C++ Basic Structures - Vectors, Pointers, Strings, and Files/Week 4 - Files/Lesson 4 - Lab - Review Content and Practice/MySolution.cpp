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
    
    /* Read and store the content of the file in a string */
    string content;

    try {
        ifstream file;
        string read;

        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }

        while (getline(file, read)) {
            content += read;
        }

        file.close();
    } catch (exception& e) {
        cerr << e.what() << endl;
    }

    /* Use the FindAndReplace() function to replace all "Burma" with "Myanmar" */
    FindAndReplace(content, "Burma", "Myanmar");

    /* Output the new string */
    for (char c : content) {
        cout << c;
        if (c == '.') {
            cout << '\n';
        }
    }

    //add code above this line
    
    return 0;
    
}
