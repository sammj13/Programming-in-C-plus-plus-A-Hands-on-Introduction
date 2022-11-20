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
     * 4. Iterate through the vector starting with the first element and skipping through every 3 elements. Notice that these elements are in the second column where we want to extract the information from.
     * 5. Compare each element in the second column to max which was initialized to 0 at first. If the element (converted to an integer) is greater than max, then the element will become the new max value.
     * 6. During this process, the elements prior to max is also kept track of in the string person variable. If max gets updated, then the person who preceded max will become the value for the person variable.
     * 7. Print the appropriate data using the specified format.
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
            while (getline(ss, read, '\t')) {
                data.push_back(read);
            }
        }
        file.close();
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }
    
    int max = 0;
    string person;
    
    for (int i = 1; i < data.size(); i+=3) {
        if (stoi(data.at(i)) > max) {
            max = stoi(data.at(i));
            person = data.at(i - 1);
        }
    }
    
    cout << "The oldest person is " << person << ".";
    
    //add code above this line
    
    return 0;
    
}
