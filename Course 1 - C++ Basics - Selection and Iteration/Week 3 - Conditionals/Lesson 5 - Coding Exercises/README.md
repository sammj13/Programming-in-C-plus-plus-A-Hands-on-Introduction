# Coding Exercises

## Exercise 1
Given the code below
```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
```
__Problem__
Use the variable `x` as you write this program. `x` will represent a positive integer. Write a program that determines if `x` is between 0 and 25 or between 75 and 100. If yes, print the message:`_ is between 0 and 25 or 75 and 100`, where the blank (`_`) will be the value of `x`. The program should do nothing if the value of `x` does not fit into either ranges.

__Note:__ These are _inclusive_ ranges - meaning if `x` is 0, 25, 75, or 100, the program should print out the message.

> <b>Type Casting</b>
> 
> Use the `to_string(x)` function to type cast the variable `x` as a string.

__Expected Output__
- If `x` is `8`, then the output should be: `8 is between 0 and 25 or 75 and 100`.
- If `x` is `80`, then the output should be: `80 is between 0 and 25 or 75 and 100`.
- If `x` is `100`, then the output should be: `100 is between 0 and 25 or 75 and 100`.

__Test your code with a few different values__
- Test with `8`
    ```
    8 is between 0 and 25 or 75 and 100
    ```
- Test with `80`
    ```
    80 is between 0 and 25 or 75 and 100
    ```
- Test with `50`
    ```
    ```

## Exercise 2
Given the code below
```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
```
__Problem__
Use the variable `x` as you write this program. `x` will represent a positive integer. Write a program that determines if `x` is divisible by 5. If yes, print `_ is divisible by 5`, where the blank (`_`) is the value of `x`. If no, print `_ is not divisible by 5`, where the blank (`_`) is the value of x.

> <b>Type Casting</b>
>
> Use the `to_string(x)` function to type cast the variable `x` as a string.

__Expected Output__
- If `x` is `50`, then the output should be: `50 is divisible by 5`.
- If `x` is `37`, then the output should be: `37 is not divisible by 5`.

__Test your code with a few different values__
- Test with `50`
    ```
    50 is divisible by 5
    ```
- Test with `37`
    ```
    37 is not divisible by 5
    ```

## Exercise 3
Given the code below
```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
```
__Problem__
Use the variable `x` as you write this program. `x` will represent a positive integer. Write a program that determines if `x` is divisible by 5 and is an even number. If yes, print `_ is divisible by 5 and even`, where the blank (`_`) is the value of `x`. If no, print `_ is not divisible by 5 or it is odd`, where the blank (`_`) is the value of x.

> <b>Type Casting</b>
>
> Use the `to_string(x)` function to type cast the variable `x` as a string.

__Expected Output__
- If `x` is `8`, then the output should be: `8 is not divisible by 5 or it is odd`.
- If `x` is `80`, then the output should be: `80 is divisible by 5 and even`.
- If `x` is `105`, then the output should be: `105 is not divisible by 5 or it is odd`.

__Test your code with a few different values__
- Test with `8`
    ```
    8 is not divisible by 5 or it is odd
    ```
- Test with `80`
    ```
    80 is divisible by 5 and even
    ```
- Test with `105`
    ```
    105 is not divisible by 5 or it is odd
    ```

## Exercise 4
Given the code below
```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
```
__Problem__
Use the variable `x` as you write this program. `x` will represent a string. Write a program that determines if `x` is a primary color (red, blue, or yellow). If yes, print `_ is a primary color`, where the blank (`_`) is the value of `x`. If no, print `_ is not a primary color`, where the blank (`_`) is the value of `x`. For this particular exercise, make sure that your code specifically checks if the variable `x` is equivalent to the strings `red`, `blue`, or `yellow` in all __lowercase__. Otherwise, your test cases will fail.

> <b>IMPORTANT</b>
>
> There is a difference between all of the following strings: "red", "Red", and "RED". When comparing strings, the system is __case-sensitive__ and will attempt to match each character of the strings to each other based on whether it is uppercase or lowercase.

__Expected Output__
- If `x` is `red`, then the output would be: `red is a primary color`.
- If `x` is `teal`, then the output would be: `teal is not a primary color`.

__Test your code with a few different values__
- Test with `"RED"`
    ```
    red is a primary color
    ```
- Test with `"TEAL"`
    ```
    teal is not a primary color
    ```

## Exercise 5
Given the code below
```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line

  

  //add code above this line
  
  return 0;
  
}
```
__Problem__
Use the variable `x` as you write this program. `x` will represent a string. Write a program that determines if `x` is a vowel (a, e, i, o, or u ). If yes, print `_ is a vowel`, where the blank (`_`) is the value of `x`. If no, print `_ is not a vowel`, where the blank (`_`) is the value of `x`. For this particular exercise, make sure that your code _specifically_ checks if the variable `x` is equivalent to the strings `a`, `e`, `i`, `o`, or `u` in __lowercase__. Otherwise, your test cases will fail.

> <b>IMPORTANT</b>
>
> There is a difference between the strings “a” and "A". When comparing strings, the system is case-sensitive and will attempt to match each character of the strings to each other based on whether it is uppercase or lowercase.

__Expected Output__
- If `x` is `a`, then the output should be: `a is a vowel`.
- If `x` is `z`, then the output should be: `z is not a vowel`.

__Test your code with a few different values__
- Test with `"A"`
    ```
    a is a vowel
    ```
- Test with `"Z"`
    ```
    z is not a vowel
    ```