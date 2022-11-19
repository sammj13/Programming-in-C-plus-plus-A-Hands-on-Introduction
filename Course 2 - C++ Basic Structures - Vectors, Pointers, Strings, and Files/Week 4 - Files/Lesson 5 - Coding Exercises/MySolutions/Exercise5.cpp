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
    vector<string> target_cities;

    try {
        ifstream file;
        string read;

        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }

        getline(file, read); // skip the 1st line of the CSV file

        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
                data.push_back(read);
            }
        }
        file.close();

        for (int i = 0; i < data.size(); i++) {
            if (i % 4 == 2) {
                if (stoi(data.at(i)) < 0) {
                    target_cities.push_back(data.at(i - 2));
                }
            }
        }

        cout << "The following cities are in the Southern Hemisphere: ";
        for (int i = 0; i < target_cities.size(); i++) {
            cout << target_cities.at(i);
            if (i == target_cities.size() - 1) {
                cout << "." << endl;
            } else {
                cout << ", ";
            }
        }
    } catch (exception& e) {
        cerr << e.what() << endl;
    }

    //add code above this line
    
    return 0;
    
}