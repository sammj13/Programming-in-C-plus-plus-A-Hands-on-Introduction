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
     * 1. Create a vector, ifstream, and string to read and store the data.
     * 2. Iterate through the file twice to tokenize the file into standalone strings. Note that you may need to create a stringstream object to iterate through the file a second time.
     * 3. Store the resulting tokens into the vector.
     * 4. Iterate through the vector by starting from the back of the vector and working to the front of the vector.
     * 5. Once printed, the elements will appear in reverse order.
     */
    vector<string> data;

    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read)) {
                data.push_back(read);
            }
        }
        file.close();
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }
    
    for (int i = data.size() - 1; i >= 0; i--) {
        cout << data.at(i) << endl;
    }

    //add code above this line
    
    return 0;
    
}
