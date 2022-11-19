# Coding Exercises

## Exercise 1

### Strings Exercise 1

__Problem__

Write a program that takes input from a user and prints the first character of the input and the last character with some context. For example, if `baseball` is the string, then the program will output `b is the first character and l is the last character`. If `cat` is the string, then `c is the first character and t is the last character` will be printed.

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line



    //add code above this line
    
    return 0;
    
}
```

__Compile and test your code with a few different values__

- Compile and test with `baseball`
    ```
    b is the first character and l is the last character
    ```

- Compile and test with `cat`
    ```
    c is the first character and t is the last character
    ```

- Compile and test with `123!`
    ```
    1 is the first character and ! is the last character
    ```

__Requirements__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You can use __any__ number of string functions and conditionals to produce the desired output.

## Exercise 2

### Strings Exercise 2

__Problem__

Write a program that captures input from the user, prints the input string as many times as its length, and prints as many lines of it as the length of the input string.

Here is what you have so far:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line



    //add code above this line
    
    return 0;
    
}
```

__Compile and test your code with a few different values__

- Compile and test with `cat`
    ```
    catcatcat
    catcatcat
    catcatcat
    ```

- Compile and test with `tree`
    ```
    treetreetreetree
    treetreetreetree
    treetreetreetree
    treetreetreetree
    ```

- Compile and test with `!@#^&`
    ```
    !@#^&!@#^&!@#^&!@#^&!@#^&
    !@#^&!@#^&!@#^&!@#^&!@#^&
    !@#^&!@#^&!@#^&!@#^&!@#^&
    !@#^&!@#^&!@#^&!@#^&!@#^&
    !@#^&!@#^&!@#^&!@#^&!@#^&
    ```

__Requirements__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You can use __any__ number of string functions and conditionals to produce the desired output.

## Exercise 3

### Strings Exercise 3

__Problem__

Write a program that accepts input from the user and creates another string that contains either a `u`, `l`, or `-` for each character of the original string. Use `u` when the character is uppercase, and use `l` when the character is lowercase. If the character is neither uppercase nor lowercase, use `-`. Print the `original` string first, then print the `modified` string.

Here is what you have so far:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string original = (argv[1]);
    string modified;
    char ch;
    
    //add code below this line



    //add code above this line
    
    return 0;
    
}
```

__Examples__

- If the user inputs `cat`, then the output will be:
    ```
    cat
    lll
    ```

- If the user inputs `HouSE`, then the output will be:
    ```
    HouSE
    ulluu
    ```

__Compile and test your code with a few different values__

- Compile and test with `cat`
    ```
    cat
    lll
    ```

- Compile and test with `house`
    ```
    HouSE
    ulluu
    ```

- Compile and test with `1234`
    ```
    1234
    ----
    ```

__Requirements__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You can use __any__ number of string functions and conditionals to produce the desired output.

## Exercise 4

### Strings Exercise 4

__Problem__

Write a program that takes input __without white spaces__ from a user, prints the first half of the string on one line, and the second half on another. In the case of a string that has an odd number of characters, the second line will have the extra character.

Here is what you have so far:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line



    //add code above this line
    
    return 0;
    
}
```

__Compile and test your code with a few different values__

- Compile and test with `c++`
    ```
    C
    ++
    ```

- Compile and test with `hello`
    ```
    he
    llo
    ```

__Requirements__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You can use __any__ number of string functions and conditionals to produce the desired output.

## Exercise 5

### Strings Exercise 5

__Problem__

Write a program that captures input from the user and swaps the letters two at a time in the string. The first two characters change places, the third and fourth characters change places, etc. Assume that the program will only take an __even__ number of characters, otherwise, there will be an error.

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line



    //add code above this line
    
    return 0;
    
}
```

__Compile and test your code with a few different values__


- Compile and test with `home`
    ```
    ohem
    ```

- Compile and test with `ocidgn`
    ```
    coding
    ```

__Requirements__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You can use __any__ number of string functions and conditionals to produce the desired output.