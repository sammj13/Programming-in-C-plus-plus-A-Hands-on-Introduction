# Lab - Review Content and Practice

## Lab: Printing

### Tutorial Lab 1: Printing

1. Try running the code below in a C++ text editor

```cpp
string my_var = "I am learning"; //step 1
cout << my_var; //step 2
my_var = " to program"; //step 3
cout << my_var; //step 4
my_var = " in C++."; //step 5
cout << my_var << endl; //step 6
my_var = "Hooray!"; //step 7
cout << my_var; //step 8
```

2. Walk through each step:

- <u>Step 1</u> - Declare the variable `my_var` and initialize it to the value `"I am learning"`
- <u>Step 2</u> - Print without a new line character by not including `<< endl;`
- <u>Step 3</u> - Add a space when starting the string to avoid printing `learningto`
- <u>Step 6</u> - A newline character is added using `<< endl;`
- <u>Step 8</u> - `Hooray!` is on its own line since the `<< endl;` command was used in step 6

## Lab: Variables

### Tutorial Lab 2: Variables

Try running the code below in a C++ text editor

```cpp
int one = 1;
int two = 2;
int three = 3;
int four = 4;
two = one;
three = two;
four = three;
cout << four;
```

## Lab: Challenge

### Tutorial Lab 3: Fundamentals Challenge

Given a series of declared and initialized variables below

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string greeting = argv[1];
    string dayOfWeek = argv[2];
    string month = argv[3];
    int day = atoi(argv[4]);
    int currentWaitMinutes = atoi(argv[5]);
    
    //add code below this line
    
    
    
    
    
    
    
    //add code above this line
    
    return 0;
  
}
```

Use these variables along with the `cout <<` and `<<
endl;` commands to print out a custom message to customers who open a chat client.

Your output should look something like this:

```
Hello! Today is Wednesday, May 4.
The current wait time is 4 minutes.
```

The pattern is as follows. The * indicates variables:

```
*greeting* Today is *dayOfWeek*, *month* *day*.
The current wait time is *currentWaitMinutes* minutes
```

To test the code, first COMPILE it and turn it into a program. If your program compiled successfully, you will see a success message. Here are a few different test cases:

```
Hello! Today is Monday, July 4.
The current wait time is 9 minutes.
```

```
Howdy! Today is Tuesday, December 15.
The current wait time is 2 minutes.
```

```
Greetings! Today is Friday, March 13.
The current wait time is 39 minutes.
```