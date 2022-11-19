# Nested Loops

## Learning Objectives: Nested Loops

- Explain nested loop syntax

- Identify the relationship between the variables in each loop with the output produced

## Nested Loops

- A __nested loop__ is a loop that exists inside of another loop. An advantage of using nested loops is that the loops can work together to create unique and complex outputs. However, due to their complexity potential, it is rare to see the implementation of more than two nested loops. If possible, it is recommended that you re-factor your code to reduce this complexity.

__Syntax__

The code below will draw a rectangle of 100 `#` in a 10 x 10 grid. The first loop controls the row of output, while the second loop prints 10 `#` to the screen.
```cpp
for (int row = 0; row < 10; row++) { //outer loop
  for (int col = 0; col < 10; col++) { //inner loop
    cout << "#";
  }
  cout << "" << endl; //adds new line
}
```

> <b>What happens if you:</b>
> 
> - Replace `row < 10` with `row < 5` in the code above?
> - Replace `col < 10` with `col < 20` in the code above?

__Nested Loop Coding Challenge 1__

Using nested loops, write some code that outputs the following:
```
###########
###########
###########
###########
###########
###########
###########
```

> <b>Hint</b>
> 
> The output is the same character (`#`). Make sure that your nested loops have the right numbers in the boolean expressions to get the appropriate number of rows and columns.

__Nested Loop Coding Challenge 2__

Using nested loops, write some code that outputs the following:
```
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
```

> <b>Hint</b>
> 
> The output is a `<` when the outer loop variable is even (0, 2, 4) and a `>` when the outer loop variable is odd (1, 3).

__Nested Loop Coding Challenge 3__

Using nested loops, write some code that outputs the following:
```
1
22
333
4444
55555
```

> <b>Hint</b>
> 
> Note how the pattern goes from `1` to `5` starting on line 1 (through line 5) and prints the line number equal to the amount of times as that numbered line. First, the outer loop should start at `1`. Second, the inner loop should run the same amount of times as the row number up to the row number's limit.

__Sample solutions__

There are _multiple_ ways to solve the challenges above but here are some sample solutions using various combinations of for and `while` loops:
```cpp
int row = 0;
while (row < 7) {
    int col = 0;
    while (col < 11) {
        cout << "#";
        col++;
    }
    cout << "" << endl;
    row++;
}
```
```cpp
for (int row = 0; row < 5; row++) {
    if (row % 2 == 0) {
        int col = 0;
        while (col < 10) {
            cout << "<";
            col++;
        }
        cout << "" << endl;
    }
    else {
        int col = 0;
        while (col < 10) {
            cout << ">";
            col++;
        }
        cout << "" << endl;
    }
}
```
```cpp
for (int row = 1; row <= 5; row++) {
    for (int col = 1; col <= row; col++) {
        cout << row;
    }
    cout << "" << endl;
}
```

> <b>Nested Loops</b>
>
> Which definition best describes a nested loop?
> - A nested loop is when you have two loops that run one after the other.
> - A nested loop is when you have a `while` loop and a `for` loop in the same program.
> - A nested loop is when a loop exists inside another loop.
> - A nested loop is when you have more than one loop in your program.
> 
> > <b>Answer:</b>
> >
> > A nested loop is when a loop exists inside another loop.
>
> > <b>Rationale:</b>
> >
> > By definition, a __nested loop__ is when one loop exists inside another loop. There are are restrictions on the type of loop that can be nested nor the number of nested loops that can be used (though it is rare to implement more than two nested loops). Thus, a `for` loop can be nested in another `for` loop and a `while` loop can be nested inside another `while` loop. In addition, a `for` loop can be nested inside a `while` loop and vice versa.

## Formative Assessment 1

> <b>Cumulative Song with a Nested Loop</b>
>
> “A cumulative song is a song with a simple verse structure modified by progressive addition so that each verse is longer than the verse before.” - Wikipedia
> 
> Rearrange the code blocks below to create a cheat sheet for the cumulative song _The 12 Days of Christmas_ where you start with 1, add 2, etc.
> 
> The output should look like:
> ```
> 1
> 1 2 
> 1 2 3 
> 1 2 3 4 
> ....
> 1 2 3 4 5 6 7 8 9 10 11 12 
> ```
>
> ```cpp
> for (int line = 1; line <= 12; line++) {
> ```
> ```cpp
> }
> ```
> ```cpp
> cout << num << " ";
> ```
> ```cpp
> cout << "" << endl;
> ```
> ```cpp
> }
> ```
> ```cpp
> for (int num = 1; num <= line; num++) {
> ```
>
> > <b>Answer:</b>
> >
> > ```cpp
> > for (int line = 1; line <= 12; line++) {
> >     for (int num = 1; num <= line; num++) {
> >         cout << num << " ";
> >     }
> >     cout << "" << endl;
> > }
> > ```
>
> > <b>Rationale:</b>
> >
> > You may have noticed that the line number corresponds with how many digits are printed on each line. For example, __line #1__ prints just the number __1__ and __line #5__ prints numbers __1 through 5__. This means that the outer loop iterator variable `line` should start at 1 and go through 12. The inner loop iterator variable `num` depends on the outer loop variable `line` which is why `num <= line` is included in the loop header. This means `num` will only go up to `line` but never over. Additionally, the output produced by the inner loop __do not__ include a newline character, which enables the numbers to be printed side by side. Only the outer loop will include the newline character to help separate the lines from each other.
> >
> > __Solution:__
> > ```cpp
> > for (int line = 1; line <= 12; line++) {
> >     for (int num = 1; num <= line; num++) {
> >         cout << num << " ";
> >     }
> >     cout << "" << endl;
> > }
> > ```

## Formative Assessment 2

> <b>Identifying Patterns with Nested Loops</b>
>
> Fill in the blanks such that the nested loop will print out:
> ```
> &&
> *
> *
> *
> &&
> *
> *
> *
> &&
> *
> *
> *
> &&
> *
> *
> *
> ```
>
> ```cpp
> for (int i = 0; i < __; i++) {
>     cout << "__" << endl;
>     for (int j = 0; j < __; j++) {
>         cout << "__" << endl;
>     }
> }
> ```
>
> > <b>Answer:</b>
> >
> > ```cpp
> > for (int i = 0; i < 4; i++) {
> >     cout << "&&" << endl;
> >     for (int j = 0; j < 3; j++) {
> >         cout << "*" << endl;
> >     }
> > }
> > ```
>
> > <b>Rationale:</b>
> >
> > First, it is necessary to determine the pattern that is being iterated. Notice how a `&&` symbol is followed by __three__ `*` symbols and this pattern repeats exactly __four__ times. This means that the inner loop should run three times for every time the outer loop runs and we want the outer loop to run four times. In other words, print three `*` for __each__ of the four printed `&&`.