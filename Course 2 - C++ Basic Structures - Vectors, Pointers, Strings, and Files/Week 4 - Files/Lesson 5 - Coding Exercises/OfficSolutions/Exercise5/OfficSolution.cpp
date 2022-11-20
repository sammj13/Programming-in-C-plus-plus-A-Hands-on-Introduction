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

    /**
     * Guide:
     * 1. Create a vector, ifstream, and string to read and store the data.
     * 2. Iterate through the file twice to tokenize the file into standalone strings. Note that you may need to create a stringstream object to iterate through the file a second time.
     * 3. Store the resulting tokens into the vector.
     * 4. Create a string to store the names of the cities.
     * 5. Print the output cout << "The following cities are in the Southern Hemisphere: ";
     * 6. Notice that we do not care about the headers in the first row so skip through those elements by iterating the vector starting from index 6. We really only care about the latitude column.
     * 7. While iterating the latitude column, check if the converted integer element is less than 0. If so, store the name of the city with that latitude into the string variable followed by a comma.
     * 8. Since the last city’s name will end in a period instead of comma and space, we cannot use the pop_back() function to remove the last two characters. Then append a period to the string variable.
     * 9. Finally, print the string variable which now includes all of the cities’ names in the correct format.
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
            while (getline(ss, read, ',')) {
                data.push_back(read);
            }
        }
        file.close();
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }
    
    string cities;
    cout << "The following cities are in the Southern Hemisphere: ";
    
    for (int i = 6; i < data.size(); i+=4) {
        if (stoi(data.at(i)) < 0) {
            cities += (data.at(i - 2) + ", ");
        }
    }
    
    cities.pop_back();
    cities.pop_back();
    cities += ".";
    
    cout << cities;

    //add code above this line
    
    return 0;
    
}