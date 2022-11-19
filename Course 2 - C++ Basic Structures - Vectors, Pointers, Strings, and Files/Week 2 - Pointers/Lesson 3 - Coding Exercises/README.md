# Coding Exercises

## Exercise 1

### Find the “Larger” Pointer

Given the current program within the text editor to your left:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int a = atoi((argv[1]));
    int b = atoi((argv[2]));
    int *p1 = &a;
    int *p2 = &b;
    
    //add code below this line



    //add code above this line
    
    return 0;
  
}
```

Complete the program so that the pointer that’s associated with the larger __value__ is printed. For example, if `a` is larger than `b`, then the system will print `*p1`. Else if `b` is larger than `a`, then the system will print `*p2`. If neither is larger, then the system will print `Neither number is larger`. Your output should look like this:

```
The larger number is <?>
```

Where `<?>` represents the larger valued pointer. Or if neither is larger, then the output will be:

```
Neither number is larger
```

__Compile and test your code with a few different values__

- Compile and test with `5` & `9`
    ```
    The larger number is 9
    ```

- Compile and test with `-3` & `-4`
    ```
    The larger number is -3
    ```

- Compile and test with `0` & `0`
    ```
    Neither number is larger
    ```

__Requirements:__

- You __should not__ make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
- You must use `*p1` and `*p2` each __at least twice__ in your code. Once for comparison and once for printing.

## Exercise 2

### Find the Pointers’ Sum

You are working to create a program that takes in two `double` inputs, associates them with pointers, and then adds the value of the dereferenced pointers together. Finally, their sum is printed with a newline. Here is what you have so far:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    double a;
    double b;
    double *p1;
    double *p2;
    
    cout << "Enter the first number: " << endl;
    cin >> a;
    if (!cin.good()) {
        cout << "invalid" << endl;
        exit(0);
    }
    cout << "Enter the second number: " << endl;
    cin >> b;
    if (!cin.good()) {
        cout << "invalid" << endl;
        exit(0);
    }
    
    // your code goes below
    
    
    
    // your code goes above
    
    cout << *p1 + *p2 << endl;
    
    return 0;
    
}
```

When running your code, you should be asked to enter a `first number` and a `second number` in the Terminal. If you enter a non-double or non-integer, the program should print `invalid` and exit the program. If the inputs are valid, then the system will add the inputs together and output their sum. __DO NOT__ make any changes to the existing code!

__Sample Outputs:__

- __Sample 1__
    ```
    Enter the first number:
    1
    Enter the second number:
    2
    The sum is 3
    ```

- __Sample 2__
    ```
    Enter the first number:
    3.14
    Enter the second number:
    5.11
    The sum is 8.25
    ```
    
- __Sample 3__
    ```
    Enter the first number:
    56
    Enter the second number:
    k
    invalid
    ```
    
- __Sample 4__
    ```
    Enter the first number:
    bool
    invalid
    ```