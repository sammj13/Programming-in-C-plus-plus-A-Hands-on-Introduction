# Lab: If Statement

## Tutorial Lab 1: If Statements

The `if` statement allows for your program to make a decision about what it should do. It asks a simple question: “Is this condition true?” If yes, then the computer will execute certain commands.

```cpp
int x = 5;

if (x < 10) {
    cout << "Less than 10" << endl;
}
```

An `if` statement is comprised of the keyword `if`, followed by a boolean expression surrounded by parentheses `()`. Any code that should run if the boolean expression is true is surrounded by curly braces `{}`. It is best practice to indent this code, but it does not affect how the code runs.

If the boolean expression is false, the code in curly braces is skipped, and the program continues as normal.

```cpp
int x = 20;

if (x < 10) {
    cout << "Less than 10" << endl;
}
    
cout << "And the program continues...";
```

`if` statements can be used to test multiple conditions. These conditions exist as boolean expressions inside the parentheses `()`. In addition, an `if` statement can exist _inside_ another `if` statement. Both blocks of code below accomplish the same exact task.

```cpp
int age = 15;

if (age < 20) {
    if (age > 10) {
        cout << "Teenager";
    }
}
```

```cpp
int age = 15;

if ((age < 20) && (age > 10)) {
    cout << "Teenager";
}
```

> <b>If Statement Uses</b>
> 
> Select __all__ of the statements below that are true regarding `if` statements.
> - `if` statements only ask if a boolean expression is true.
> - `if` statements will perform a set of commands if the boolean expression is false.
> - `if` statements can be nested within each other - meaning the command for one `if` can include another `if` statement.
> - `if` statements can contain compound conditionals - meaning they can evaluate multiple boolean expressions to see if the overall condition is true.
> 
> > <b>Answer:</b> 
> > 
> > - `if` statements only ask if a boolean expression is true.
> > - `if` statements can be nested within each other - meaning the command for one `if` can include another `if` statement.
> > - `if` statements can contain compound conditionals - meaning they can evaluate multiple boolean expressions to see if the overall condition is true.
>
> > <b>Rationale:</b>
> > 
> > All of the choices except #2 are correct. `if` statements only run their specified command(s) if their boolean expression or conditional evaluates to true. In addition, `if` statements can be nested within each other and can be used to evaluate compound conditionals.

# Lab: If Else Statement

## Tutorial Lab 2: If Else Statements

The `if else` statement gives your program the ability to ask a question, perform certain actions if the answer is true, and then perform another set of actions if the answer is false.

```cpp
int x = 10;

if (x > 50) {
    cout << to_string(x) + " is greater than 50" << endl;
}
else {
    cout << to_string(x) + " is less than 50" << endl;
}
```

The `if` part of the `if else` statement is written as before. The `else` keyword is not indented; it should be aligned with the `if` keyword. else is followed by an open curly brace `{`. You do not use a boolean expression with `else`. All code that should run when the boolean expression is false should go before the closing curly brace `}`.

Be careful when expressing your boolean expression in terms of "less than or greater than". This does not take into account when the values being compared are equal. Consider the code from above, but with `x` having the value of `50`.

```cpp
int x = 50;

if (x > 50) {
    cout << to_string(x) + " is greater than 50" << endl;
}
else {
    cout << to_string(x) + " is less than 50" << endl;
}
```

The output of the program does not make sense. 50 is not less than 50. Sometimes using `<=` and `>=` need to be used. Another solution is to update the output to be more inclusive such as replacing `is less than 50` with `is less than or equal to 50`. In either case, be sure to think through all of the possible outcomes, and make sure your code can function properly in all of those scenarios.

> <b>If Else Even or Odd</b>
> 
> Drag the appropriate code blocks into the solution box below. Your program should check to see if a number (`x`) is even, and if it is, print "Even". If the number is not even, then print "Odd".
> - ```cpp
>   cout << Even;
>   ```
> 
> - ```cpp
>   if (x % 2 = 0) {
>   ```
> 
> - ```cpp
>   cout << Odd;
>   ```
> 
> - ```cpp
>   if (x / 2 == 0) {
>   ```
> 
> - ```cpp
>   }
>   ```
> 
> - ```cpp
>   cout << "Odd";
>   ```
> 
> - ```cpp
>   if (x % 2 == 0) {
>   ```
> 
> - ```cpp
>   cout << "Even";
>   ```
> 
> - ```cpp
>   }
>   ```
> 
> - ```cpp
>   else {
>   ```
> 
> > <b>Answer:</b> 
> > 
> > ```cpp
> > if (x % 2 == 0) {
> >     cout << "Even";
> > }
> > else {
> >     cout << "Odd";
> > }
> > ```
>
> > <b>Rationale:</b>
> > 
> > Remember to check for the following:
> > - Indentation
> > - Correct operator usage
> > - Correct data type usage

# Lab: Switch Statement

## Tutorial Lab 3: Switch Statement

The `switch case` statement gives your program the ability to perform different actions based on the _value_ of a given variable.

```cpp
int size = 3;

switch (size) {
    case 1: cout << "Short"; break;
    case 2: cout << "Tall"; break;
    case 3: cout << "Grande"; break;
    case 4: cout << "Venti"; break;
    case 5: cout << "Trenta"; break;
    default: cout << "Grande";
}
```

The variable used to make the decision is in parentheses following the `switch` keyword. Inside curly braces, the cases listing the different values to check are followed by a `:` and then the code that should run if the variable is equal to that case’s value comes next. The last case, `default`, runs if none of the other cases are true. Each code segment except the last one ends with `break;` to signal the program to jump to the closing curly brace.

Remember to include `break;` statements at the end of each case. Check out what happens when you remove them.

```cpp
int size = 3;

switch (size) {
    case 1: cout << "Short";
    case 2: cout << "Tall";
    case 3: cout << "Grande";
    case 4: cout << "Venti";
    case 5: cout << "Trenta";
    default: cout << "Grande";
}
```

The output of the program does not make sense because the program continues through all of the cases after the initial case is matched to a value. In the example above, the program prints the command for `case 3` as well as all of the commands that follow.

> <b>Printing Switch Case</b>
> 
> Analyze the code below and determine what will be __printed__ when the program is run.
> ```cpp
> int size = 2;
> 
> switch (size) {
>     case 1: cout << "Small" << endl;
>     case 2: cout << "Medium" << endl;
>     case 3: cout << "Large" << endl;
>             break;
>     default: cout << "X-Large" << endl;
> }
> ```
> - ```
>   Medium
>   ```
> 
> - ```
>   Medium
>   Large
>   ```
> 
> - ```
>   Small
>   Medium
>   Large
>   ```
> 
> - ```
>   Small
>   Medium
>   Large
>   X-Large
>   ```
> 
> > <b>Answer:</b> 
> > 
> > ```
> > Medium
> > Large
> > ```
>
> > <b>Rationale:</b>
> > 
> > The `switch case` statement will always try to match the variable with a case’s value first. Since `size = 2`, the system will first print the command for `case 2` which is `Medium`. There is no `break` statement after the command so the program will continue onto the next case, `case 3`, and print that command as well, `Large`. Then it encounters a `break` and exits the `switch case` statement resulting in the output of:
> > ```
> > Medium
> > Large
> > ```

# Lab Challenge: Month of the Year
## Conditionals Challenge

Given the starter code below:
```cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int month = stoi(argv[1]);
    
    //add code below this line


    
    //add code above this line
    
    return 0;
    
}
```

Write a program that determines the month of the year based on the value of a variable called `month`. The variable will be a number from 1 to 12 (`1` is January, `2` is February, etc.). Use a `cout <<` statement to write the month to the screen.

Test your code with a few different values

Test with 3
```
March
```

Test with 8
```
August
```

Test with 12
```
August
```