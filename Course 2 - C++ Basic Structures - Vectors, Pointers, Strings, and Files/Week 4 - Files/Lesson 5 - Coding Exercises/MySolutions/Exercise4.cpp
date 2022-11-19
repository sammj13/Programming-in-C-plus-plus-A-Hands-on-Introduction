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
    int maxAge = 0;
    string oldest = "";

    try {
        ifstream file;
        string read;

        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }

        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, '\t')) {
                data.push_back(read);
            }
        }
        file.close();

        for (int i = 0; i < data.size(); i++) {
            if (i % 3 == 1) {
                if (stoi(data[i]) > maxAge) {
                    maxAge = stoi(data[i]);
                    oldest = data[i - 1];
                }
            }
        }

        cout << "The oldest person is " << oldest << ".\n";
    } catch (exception& e) {
        cerr << e.what() << endl;
    }
    
    //add code above this line
    
    return 0;
    
}
