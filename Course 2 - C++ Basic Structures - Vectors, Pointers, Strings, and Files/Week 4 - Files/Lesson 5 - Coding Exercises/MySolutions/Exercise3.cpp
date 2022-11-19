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

    vector<string> lines;

    try {
        ifstream file;
        string read;

        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }

        while (getline(file, read)) {
            lines.push_back(read);
        }
        file.close();

        for (int i = lines.size() - 1; i >= 0; i--) {
            cout << lines[i] << endl;
        }
    } catch (exception& e) {
        cerr << e.what() << endl;
    }

    //add code above this line
    
    return 0;
    
}
