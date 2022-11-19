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
    
    vector<string> data;
    int col0 = 0;
    int col1 = 0;
    int col2 = 0;
    int col3 = 0;
    
    try {
        ifstream file;
        string read;
        
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
                data.push_back(read);
            }
        }
        file.close();
        
        for (int i = 0; i < data.size(); i++) {
            if (i % 4 == 0) {
                col0 += stoi(data.at(i));
            } else if (i % 4 == 1) {
                col1 += stoi(data.at(i));
            } else if (i % 4 == 2) {
                col2 += stoi(data.at(i));
            } else {
                col3 += stoi(data.at(i));
            }
        }

        cout << col0 / 3 << " " << col1 / 3 << " " << col2 / 3 << " " << col3 / 3 << endl;
    } catch (exception& e) {
        cerr << e.what() << endl;
    }

    //add code above this line
    
    return 0;
    
}