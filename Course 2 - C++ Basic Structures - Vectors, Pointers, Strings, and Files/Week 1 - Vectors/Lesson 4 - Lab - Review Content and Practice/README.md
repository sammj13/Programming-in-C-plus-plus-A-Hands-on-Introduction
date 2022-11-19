# Lab: Arrays

## Tutorial Lab 1: Using an Array

An array is a data structure that groups data together into a collection of __elements__. Each element has its own __index__ or position within the array. These elements can be initialized, accessed, modified, and printed. Try out the code below

```cpp
string classes[] = {"Math", "English", "Science", "Social Studies", "Spanish"};

classes[4] = "French";

for (int i = 0; i < sizeof(classes)/sizeof(classes[0]); i++) {
    cout << classes[i] << endl;
}
```

__Program Summary__

1. An array called `classes` is created and initialized with elements (i.e. `"Math`, `"English"`, etc.).
2. At index 4, `"Spanish"` is modified and replaced with `"French"`. Keep in mind that array indices start at `0`, not `1`.
3. A `for` loop iterates through the elements in the array. It starts at index 0, ends right before index 5, and increments by 1 after each iteration.
4. Each element from index 0 through index 4 gets printed with a newline.

> <b>Even or Odd Index?</b>
> 
> Rearrange the code blocks below to produce a program that:
> 1. Declares a boolean array of 5 elements.
> 2. Iterates through the array and modifies it so that elements at even indices are changed to true and elements at odd indices are `false`.
> 
> If you were to print all of the elements in the array, it would look like this:
> ```
> true false true false true
> ```
> __Hint:__ You can use the following code to check your output.
> ```cpp
>   for (auto i : bools) {
>       cout << boolalpha << i << " ";
>   }
> ```
> - ```cpp
>   bools[i] = true;
>   ```
> - ```cpp
>   bool bools[5];
>   ```
> - ```cpp
>   else {
>   ```
> - ```cpp
>   }
>   ```
> - ```cpp
>   bools[i] = false;
>   ```
> - ```cpp
>   }
>   ```
> - ```cpp
>   if (i % 2 == 0) {
>   ```
> - ```cpp
>   }
>   ```
> - ```cpp
>   for (int i = 0; i < sizeof(bools)/sizeof(bools[0]); i++) {
>   ```
>
> > <b>Answer:</b> 
> > 
> > ```cpp
> > bool bools[5];
> > for (int i = 0; i < sizeof(bools)/sizeof(bools[0]); i++) {
> >     if (i % 2 == 0) {
> >         bools[i] = true;
> >     }
> >     else {
> >         bools[i] = false;
> >     }
> > }
> > ```
>
> > <b>Rationale:</b>
> > 
> > - First, create a new array with 5 elements, `bool bools[5]`.
> > - Create a `for` loop that iterates through the length of the array and increments by 1 after every iteration, `for (int i = 0; i < sizeof(bools)/sizeof(bools[0])`.
> > - If the index is even, modify the element and change it to `true`, `if (i % 2 == 0) { bools[i] = true; }`.
> > - If the index is odd, modify the element and change it to `odd`, `else { bools[i] = false; }`.

# Lab: Vectors

## Tutorial Lab 2: Using a Vector

A vector is another data structure that has many of the same functionalities as an array. However, they are more flexible in the functions that they are able to use. These functions include adding and removing elements within the vector, meaning vectors can __dynamically__ change their size, something arrays cannot do. Try out the code below.

```cpp
vector<string> veggies(0);
veggies.push_back("carrot");
veggies.push_back("tomato");
veggies.push_back("celery");
veggies.push_back("spinach");

veggies.erase(veggies.begin()+1);
veggies.at(1) = "potato";

for (auto a : veggies) {
    cout << a << endl;
}
```

__Program Summary__

1. A vector called `veggies` is created.
2. `carrot`, `tomato`, `celery`, and `spinach` are added to the vector as elements.
3. The element at index 1 (`tomato`) is removed.
4. The element `potato` replaces the element at index 1, which is currently `celery` since tomato was deleted previously.
5. An enhanced `for` loop is used which creates an iterating variable `a` (typed auto) to take on the value of each element.
6. Each element `a` is then printed with a newline.

> <b>Vector Size</b>
> 
> Select __all__ of the following functions that will affect a vector’s size. In other words, the number of elements is changed by the function(s).
> - `push_back()`
> - `erase()`
> - `at()`
> - `pop_back()`
> 
> > <b>Answer:</b> 
> > 
> > `push_back()`, `erase()`, `pop_back()`
>
> > <b>Rationale:</b>
> > 
> > `push_back()`, `erase()`, and `pop_back()` all affect the size of a vector. The size of the vector will increase by one after `push_back()` is used and will decrease by 1 after `pop_back()` is used. Depending on the parameter(s), `erase()` can delete one or multiple elements which will cause the vector to shrink in size. `at()` will access and can modify an element, but it will not change the size of the vector.

# Lab: 2D Arrays

## Tutorial Lab 3: Using a 2D Array

A 2D array is an array inside another array. This data structure can be visually compared to a table where there are rows and columns and each element exists inside each “cell.” To access or modify elements, both the row index and column index are needed. Like arrays, 2D arrays are __static__ so elements cannot be added or removed after initialization.

```cpp
int coordinates[5][2] = { {-4, 3},
                          {2, 1},
                          {0, -8},
                          {-11, 9},
                          {-5, -7} };

int row = sizeof(coordinates) / sizeof(coordinates[0]);
int col = sizeof(coordinates[0]) / sizeof(int);
                        
for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        if (j == 1) {
            cout << coordinates[i][j] << endl;
        }
        else {
        cout << coordinates[i][j] << " ";
        }
    }
}
```

> <b>Wrong Number</b>
> 
> Given the 2D array output:
> ```
> 1 2 3
> 4 5 0
> 7 8 9
> ```
> If this 2D array was declared as int `keypad[3][3];`, which of the following statements will modify the 2D array so that `6` is printed as an element instead of `0`?
> - ```cpp
>   keypad[2][3] = "6";
>   ```
> - ```cpp
>   keypad[2][3] = 6;
>   ```
> - ```cpp
>   keypad[1][2] = "6";
>   ```
> - ```cpp
>   keypad[1][2] = 6;
>   ```
> 
> > <b>Answer:</b> 
> > 
> > ```cpp
> > keypad[1][2] = 6;
> > ```
>
> > <b>Rationale:</b>
> > 
> > The 2D array is of type `int`, therefore the element has to be an integer `6` rather than a string `"6"`. 2D array indices start at 0, not 1; therefore, `0` is located at row index 1 and column index 2. To change `0` to `6`, the correct command is `keypad[1][2] = 6;`.

# Lab Challenge: 2D Chessboard

## 2D Chessboard

You are trying to create a chessboard representation using the alphabetical __uppercase__ letters `O` and `X`. The `O` represents the lighter spaces while the `X` represents the darker spaces.

```
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
OXOXOXOX
XOXOXOXO
```

So far you have the following code within the text editor to your left:

```cpp
#include <iostream>
using namespace std;

int main() {
  
  string chessboard[8][8];
  
  int row = sizeof(chessboard) / sizeof(chessboard[0]);
  int col = sizeof(chessboard[0]) / sizeof(string);
  
  //add code below this line



  //add code above this line
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == col - 1) {
        cout << chessboard[i][j] << endl;
      }
      else {
        cout << chessboard[i][j];
      }
    }
  }
  
  return 0;
  
}
```

__Chessboard Challenge__

> <b>Assignment:</b>
> 
> For this challenge, you will use your knowledge of 2D arrays to produce the chessboard pattern:
> ```
> OXOXOXOX
> XOXOXOXO
> OXOXOXOX
> XOXOXOXO
> OXOXOXOX
> XOXOXOXO
> OXOXOXOX
> XOXOXOXO
> ```
> 
> <b>Requirement:</b>
> 
> Your program __cannot make any changes__ to the existing code in the program.
> 
> <b>Hint:</b> 
> 
> It is probably much easier to use nested `for` loops in your code to populate the 2D array with either `O` or `X` than to go through each (row, column) index to modify the elements.