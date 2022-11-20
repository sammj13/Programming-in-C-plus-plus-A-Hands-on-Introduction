# Coding Exercises

## Exercise 1

__Problem__

Given the following code:

```cpp
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



    //add code above this line
  
    return 0;
  
}
```

Write a program that reads a text file and returns the number of lines as well as the total number of characters in the file.

__Expected Output__

You may add additional helper functions if you’d like, but your program __must__ include the following line of code:

```cpp
string path = argv[1];
```

The variable `path` allows for different text files to be sent to your program for testing.

```
4 line(s)
228 character(s)
```

## Exercise 2

__Problem__

Given the following code:

```cpp
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



    //add code above this line
    
    return 0;
    
}

```

Write a program that reads a comma delimited CSV file with four columns and returns the average of each __column__ in the file. __Assume__ that the CSV files used will only contain __3 rows__ and __4 columns__.

__Expected Output__

The CSV file looks like the one below.

```
1,5,10,30
19,15,10,15
10,4,-2,15
```

You may add additional helper functions if you’d like, but your program __must__ include the following line of code:

```cpp
string path = argv[1];
```

The variable `path` allows for different text files to be sent to your program for testing.

```
10 8 6 20
```

Where `10` represents the average of the numbers in the first column, `8` represents the average of the numbers in the second column, etc.

## Exercise 3

__Problem__

Given the following code:

```cpp
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



    //add code above this line
  
    return 0;
  
}
```

Write a program that reads a text file and prints the contents in reverse order.

__Expected Output__

You may add additional helper functions if you’d like, but your program __must__ include the following line of code:

```cpp
string path = argv[1];
```

The variable `path` allows for different text files to be sent to your program for testing.

```
The child still struggled and loaded me with epithets which carried despair to my heart; I grasped his throat to silence him, and in a moment he lay dead at my feet.
‘Frankenstein! you belong then to my enemy—to him towards whom I have sworn eternal revenge; you shall be my first victim.’
‘Hideous monster! Let me go. My papa is a syndic—he is M. Frankenstein—he will punish you. You dare not keep me.’
‘Boy, you will never see your father again; you must come with me.’
He struggled violently. ‘Let me go,’ he cried; ‘monster! Ugly wretch! You wish to eat me and tear me to pieces. You are an ogre. Let me go, or I will tell my papa.’
```

__Note__ that there are __newlines__ at the end of a few sentences!

## Exercise 4

__Problem__

Given the following code:

```cpp
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



    //add code above this line
  
    return 0;
  
}
```

Write a program that reads a tab `('\t')` delimited CSV file and prints the name of the oldest person in the file. __Assume__ that there are no two people with the same age.

__Expected Output__

The CSV file looks like the one below.

```
Peter   38  Doctor
Paul    41  Lawyer
Mary    32  Systems Engineer
```

You may add additional helper functions if you’d like, but your program __must__ include the following line of code:

```cpp
string path = argv[1];
```

The variable `path` allows for different text files to be sent to your program for testing.

```
The oldest person is Paul.
```

## Exercise 5

__Problem__

Given the following code:

```cpp
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



    //add code above this line
    
    return 0;
  
}
```

Write a program that reads a comma delimited CSV file and prints all of the cities which reside in the Southern Hemisphere. Note, any latitude with a negative value is south of the equator.

__Expected Output__

The CSV file looks like the one below.

```
City,Country,Latitude,Longitude
Beijing,China,39,116
Perth,Australia,-57,115
Port Moresby,Papua New Guinea,-25,147
Tokyo,Japan,35,139
```

You may add additional helper functions if you’d like, but your program __must__ include the following line of code:

```cpp
string path = argv[1];
```

The variable `path` allows for different text files to be sent to your program for testing. 

```
The following cities are in the Southern Hemisphere: Perth, Port Moresby.
```