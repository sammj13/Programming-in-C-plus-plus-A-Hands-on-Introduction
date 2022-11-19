# Coding Exercises

## Exercise 1

### Print the Array

Given the current program

```cpp
#include <iostream>
using namespace std;

int main() {
  
    string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
    //add code below this line
  
  
  
    //add code above this line
  
    return 0;
  
}
```

Complete the program so that the resulting output will be:

```
Pacific
Atlantic
Indian
Arctic
Southern
```

__Requirements:__

- You __cannot__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You __must__ include the array name `oceans` in your code so that each element of the array can be printed.
- You __cannot__ print the individual strings `Pacific`, `Atlantic`, `Indian`, `Arctic`, and `Southern` in your code. Instead, refer to the array elements themselves.
- Each element should be printed with a __newline__.

## Exercise 2

### Array to Vector

You want to convert the `oceans` array into a vector. Here is what you have so far:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line



  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}
```

Complete the program so that when printing `oceans`, you get the output:

```
Pacific
Atlantic
Indian
Arctic
Southern
```

__Requirements:__

- You __cannot__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You __must__ include at least __ONE__ `push_back()` function, at least __ONE__ `pop_back()` function, and at least __ONE__ `at()` function in your program.

## Exercise 3

### Print Backwards

You are writing a program that adds three string arguments into a vector called `reverse`.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
    vector<string> reverse(0);
    reverse.push_back(argv[1]);
    reverse.push_back(argv[2]);
    reverse.push_back(argv[3]);
    
    //add code below this line

    

    //add code above this line
    
    for (auto a : reverse) {
        cout << a << endl;
    }
    
    return 0;
  
}
```

Then you want to modify the string arguments so that they are printed in reverse order. For example, if the three string arguments are `one`, `two`, and `three`, then the program will print:

```
three
two
one
```

__Compile and test your code with a few different values__

- Compile and test with `1`,`2`,`3`
    ```
    3
    2
    1
    ```

- Compile and test with `today`,`is`,`great`
    ```
    great
    is
    today
    ```

- Compile and test with `do`,`re`,`mi`
    ```
    mi
    re
    do
    ```

__Requirements:__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You can use __any__ number of vector functions to modify `reverse` so that the arguments print in reverse order.

## Exercise 4

### Row and Column Sums

Given the current code:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
    int a = atoi((argv[1]));
    int b = atoi((argv[2]));
    int c = atoi((argv[3]));
    int d = atoi((argv[4]));
    int nums[3][3];
    
    //add code below this line



    //add code above this line
    
    int row = sizeof(nums) / sizeof(nums[0]);
    int col = sizeof(nums[0]) / sizeof(int);
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == 2) {
                cout << nums[i][j] << endl;
            }
            else {
                cout << nums[i][j] << " ";
            }
        }
    }
    
    return 0;
  
}
```

Complete the program so that it takes in 4 integers (`a`, `b`, `c`, and `d`) as arguments, stores them in the 2D array `nums`, and then prints their row, column, and total sums. The program should print the integers according to this formula:

```
(a)   (b)   (a+b)
(c)   (d)   (c+d)
(a+c) (b+d) ((a+b)+(c+d)+(a+c)+(b+d))

// (a+b) is the first row's sum
// (c+d) is the second row's sum
// (a+c) is the first column's sum
// (b+d) is the second column's sum.
// ((a+b)+(c+d)+(a+c)+(b+d)) is the total sum of all rows and columns
```

For example, arguments `1`, `2`, `3`, and `4` will produce the output:

```
1 2 3
3 4 7
4 6 20

// 1 + 2 = 3 (first row's sum)
// 3 + 4 = 7 (second row's sum)
// 1 + 3 = 4 (first column's sum)
// 2 + 4 = 6 (second column's sum)
// ((1+2) + (3+4) + (1+3) + (2+4)) = 20 (total sum)
```

where `3` and `7` are row sums, `4` and `6` are column sums, and `20` is the total sum.

Arguments `9`, `8`, `7`, and `6` will produce the output:

```
9 8 17
7 6 13
16 14 60

// 9 + 8 = 17 (first row's sum)
// 7 + 6 = 13 (second row's sum)
// 9 + 7 = 16 (first column's sum)
// 8 + 6 = 14 (second column's sum)
// ((9+8) + (7+6) + (9+7) + (8+6)) = 60 (total sum)
```

where `17` and `13` are row sums, `16` and `14` are column sums, and `60` is the total sum.

__Compile and test your code with a few different values__

- Compile and test with `1`,`2`,`3`,`4`
    ```
    1 2 3
    3 4 7
    4 6 20
    ```

- Compile and test with `9`,`8`,`7`,`6`
    ```
    9 8 17
    7 6 13
    16 14 60
    ```

- Compile and test with `-2`,`4`,`6`,`-12`
    ```
    -2 4 2
    6 -12 -6
    4 -8 -8
    ```

__Requirements:__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You should access and modify the 2D array by __assigning__ the correct sums to each row and column indices pair.

## Exercise 5

### Find the Average

You are working to create a program that continuously takes in double and integer inputs and adds them to a vector called `numList`. If an input is not a double or an integer type, then the program will iterate through `numList`, add each value to the `total`, and calculate the average (`avg`). Finally, the average is printed with a newline. Here is what you have so far:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
    double input;
    double total = 0;
    double avg = 0;
    vector<double> numList(0);
    
    cout << "Enter double or int to add to total, else find total average:" << endl;
    while (cin >> input) {
    
        // add input into vector
        
        
        
        // your code goes above
    
        cout << "Enter double or int to add to total, else find total average:" << endl;
    }
    
    // iterate through vector, add elements to total, then calculate average
    
    
    
    // your code goes above
    
    cout << avg << endl;
    
    return 0;
  
}
```

Follow the comments within the code to complete the program. When running your code, you should be able to continuously enter doubles and integers into the Terminal. If you enter a non-double or non-integer, the program should stop and print the average. If no doubles or integers are entered, then the program will print `0`.

__Sample Outputs:__

- __Sample 1__
    ```
    Enter double or int to add to total, else find total average:
    1
    Enter double or int to add to total, else find total average:
    2
    Enter double or int to add to total, else find total average:
    3
    Enter double or int to add to total, else find total average:
    x
    2
    ```

- __Sample 2__
    ```
    Enter double or int to add to total, else find total average:
    I am entering a non-integer
    0
    ```

- __Sample 3__
    ```
    Enter double or int to add to total, else find total average:
    -14.5
    Enter double or int to add to total, else find total average:
    14.5
    Enter double or int to add to total, else find total average:
    -14
    Enter double or int to add to total, else find total average:
    14
    Enter double or int to add to total, else find total average:
    -5.5
    Enter double or int to add to total, else find total average:
    ?
    -1.1
    ```