# Coding Exercises

## Exercise 1
Given the code below
```cpp
#include <iostream>
using namespace std;

int main() {
    
    //fix the code below this line

    int a = 5;
    string b = 9;

    //fix the code above this line

    cout << (a * 3 + b - 8 / 2) << endl;
    
    return 0;

}
```

Complete the code such that the code returns `17`. Please note there are _two_ types of errors present in the code:

1. A __compilation error__ - the compiler sees a problem and throws an error to alert you.
2. A __run-time error__ - an error when the code is running.

> <b>Compilation Error Hint</b>
> 
> An example of a compilation error would be 
> ```cpp
> int number = "this is not an int";.
> ```

> <b>Compilation Error</b>
> 
> When you have fixed the compilation error, click the button below to check your work.
> 
> > The compilation bug is located on the following line:
> > ```cpp
> > string b = 9;
> > ```
> > 
> > The bug is that `b` is declared as a `string` but is being assigned to `9` which is an `int`. To correct this, you would replace `string` with `int` which results in:
> > ```cpp
> > int b = 9;
> > ```

> <b>Run-Time Error Hint</b>
> 
> Once you fix the compilation error, you will see that the code output does not match what the exercise asks for.

> <b>Try Debugging</b>
> 
> Debugging is a set of practices used to remove bugs (defects or flaws within a program). One way is to print out useful information. Try printing out what the variables should be to get to __17__:
> 
> $a = 17 -$ $\frac{b - 8/2}{3}$
> 
> $b = 17 - a * 3 + \frac{8}{2}$
> 
> You can also try tweaking the variables to see how that changes the output of the code. For example, what happens when you try assigning `a` to `6` instead of `5`?

## Exercise 2
Given the code below
```cpp
#include <iostream>
using namespace std;

int main() {

    // add code below this line



    // add code above this line

    return 0;

}
```

Using _ONLY_ __numbers and operators__, print an expression that evaluates to `false`. Make sure to use `cout << boolalpha <<` in your code. Otherwise, the system will print `0` or `1` instead of `false` or `true`.

## Exercise 3
Given the code below
```cpp
#include <iostream>
using namespace std;

int main() {

    // add code below this line



    // add code above this line

    return 0;

}
```

Write a program that outputs `Hello world`. Your program __must__ do the following things:
1. Use __two__ variables, one assigned to `Hello ` and the other assigned to `world`.
2. Use just __one__ `cout << ` statement.

## Exercise 4
Given the code below
```cpp
#include <iostream>
using namespace std;

int main() {

    // add code below this line



    // add code above this line

    return 0;

}
```

Write a program that divides `7` by `2` and prints out the result (`3.5`) __without__ using the `printf()` command. Your program __must__ do the following things:
1. Declare __two__ variables and assign them to the appropriate values, and __use__ them to calculate your quotient of `3.5`.
2. Include just __one__ division (`/`) operator in your code.
3. Use just __one__ `cout << ` statement.

## Exercise 5
Given the code below
```cpp
#include <iostream>
using namespace std;

int main() {

    string num1;
    string num2;
    cout << "Type the first whole number and then press Enter or Return: ";
    cin >> num1;
    cout << "Type the second whole number and then press Enter or Return: ";
    cin >> num1;

    //fix the code below this line

    string sum = num1 + num2;
    cout << ( num1 + " + " + num2 + " = " + sum ) << endl;

    //fix the code above this line

    return 0;

}
```

Your friend wrote a program called an __adder__. The adder is supposed to take two numbers inputted by a user and then find the sum of those numbers, but it’s behaving oddly.

Your first task is to figure out what is wrong with the adder. Your second task is to fix it.

#### Hint(s) to identify the problem
Try entering `1` and `1`. You expect the output to be `2` but you get `11` instead. Similarly, if you enter `3` and `4`, you expect the output to be `7` but you get `34`. Remember, __string concatenation__ also uses the `+` operator.

#### Hint(s) to identify the solution
The `+` operator functions differently based on the type of data that comes before and after it. What data types will cause the `+` operator to calculate a __mathematical__ sum? What data type is present in the program now? How do you convert from one data type to another? Check out the __Type Casting__ page for some ideas.