# Vector Basics

## Learning Objectives: Vector Basics

- Create an empty vector
- Add and remove vector elements
- Modify vector elements
- Iterate through vector using both a regular `for` loop and an _enhanced_ `for` loop
- Determine vector output
- Determine key differences between vectors and arrays

## Creating a Vector

### What Is a Vector?

Although arrays are very useful for data collection, they are considered __static__, meaning once they are created, you cannot add or remove elements from them without changing the way they are initialized. __Vectors__, on the other hand, are __dynamic__, meaning you can make changes to them while the program is running. Vectors are particularly helpful when you don’t know how large your collection of elements will become. Since vectors are dynamic, you can add and remove elements later on if needed. In order to use vectors, you must include `#include <vector>` in the header of your program. For convenience, the program file to your left already contains the included statement.

### Vector Creation

To create a vector, you need to include the following:
- The keyword `vector` followed by the data type in angle brackets `<>`.
- A variable name that refers to the vector.
- The number of elements the vector can hold within parentheses `()`.
```cpp
vector<int> numbers(3);

cout << numbers << endl;
```

> <b>IMPORTANT</b>
> 
> - When you try to print an array reference variable, you will get the array’s memory address. However, this is __not__ the case for vectors.

To print an element within the vector, use the `at()` function and specify the index of the position of the element you wish to print within the parentheses.
```cpp
vector<int> numbers(3);

cout << numbers.at(0) << endl;
```

Similar to arrays, the first index or position of the vector also starts at index `0`. Thus, `numbers.at(0)` refers to the element at the first position in the vector, which currently does not contain any initialized elements. When a vector is declared without any initialized elements, the system will populate the vector with `0` as elements by default. This is common across vectors of many data types except strings. Additionally, if you try to output an element at an index that does not exist, you will get an `out_of_range` error message.
```cpp
vector<int> numbers(3);

cout << numbers.at(3) << endl;
//index 3 refers to the fourth element, not third, which doesn't exist
```

### Determining Vector Size

Vectors use the __function__ `size()` to determine the number of elements that exist instead of the __operator__ `sizeof()` which is used for arrays. Note their slight difference in syntax and usage.
```cpp
vector<int> numbers(3);
int digits[3];

cout << numbers.size() << endl;
cout << sizeof(digits) / sizeof(digits[0]) << endl;
```

> <b>What happens if you:</b>
> 
> - remove `3` within `vector<int> numbers(3);`?
> - remove `3` within `int digits[3];`?

> <b>IMPORTANT</b>
> 
> In both arrays and vectors, you must specify how many elements you expect them to hold. Otherwise, you will not be able to determine their size. However, if you initialize the array or vector upon declaration, then you don’t have to specify the number of elements since the system can determine that automatically.

> <b>Vector Syntax</b>
>
> Which of the following vector syntax is __correct__?
> - ```cpp
>   vector names<string>(2);
>   ```
> - ```cpp
>   vector<string> names(2);
>   ```
> - ```cpp
>   string vector<2>();
>   ```
> - ```cpp
>   names(2) string<vector>;
>   ```
> 
> > <b>Answer:</b>
> >
> > ```cppp
> > vector<string> names(2);
> > ```
>
> > <b>Rationale:</b>
> >
> > There are four components to declaring a vector, you must have the following in order:
> > 
> > 1. The keyword `vector`.
> > 2. The data type in angle brackets `<>`.
> > 3. A name for the vector.
> > 4. The number of elements in parentheses `()`.
> > 
> > Thus, the correct answer is `vector<string> names(2);`.

## Adding and Removing Elements

### Adding Vector Elements

To add elements to the vector, simply use the `push_back()` function. The `push_back()` function will add whatever element that is specified inside parentheses `()` to the __end__ of the vector. If an element is added to an empty vector such as `vector<int> numbers(0)`, that element will be the first and only element in the vector.
```cpp
vector<int> numbers(0); //vector with no elements
numbers.push_back(50); //add 50 as an element to end of vector

cout << numbers.at(0) << endl; //50 becomes first and only element
```

__Note__ that the `push_back()` function does __not__ replace elements.

```cpp
vector<int> numbers(2); //vector with 2 uninitialized elements
numbers.push_back(50); //add 50 as an element to end of vector

cout << numbers.at(0) << endl; //first uninitialized element
cout << numbers.at(1) << endl; //second uninitialized element 
cout << numbers.at(2) << endl; //50 is the third element now
```

> <b>What happens if you:</b>
> 
> - change `numbers.push_back(50);` in original code to `numbers.push_back(true);`?
> - change `numbers.push_back(50);` in original code to `numbers.push_back(50.99);`?
> - change `numbers.push_back(50);` in original code to `numbers.push_back("50.99");`? __Note:__ “50.99”

> <b>IMPORTANT</b>
> 
> Arrays are strict when it comes to data type compatibility, however, vectors are more flexible. Between the four common data types, string is the only type that cannot be associated with the other three in a vector. Integers, doubles, and booleans are all compatible with each other. Remember, in C++, `true` is `1` and `false` is `0`.
> 
> In addition, when doubles are converted into integers, their decimal value get eliminated. This is why pushing `50.99` into an `int` vector causes it to turn into `50` without the decimal value.

To add an element to a __specific index__ in the vector, you can use the `insert()` along with the `begin()` functions like below.
```cpp
vector<int> numbers(2);
numbers.insert(numbers.begin()+1, 50); //add 50 to index 1
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl;
cout << numbers.at(2) << endl;

numbers.insert(numbers.begin()+1, 100); //add 100 to index 1
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl;
cout << numbers.at(2) << endl; //50 now becomes index 2
```

> <b>What happens if you:</b>
> 
> - change `numbers.insert(numbers.begin()+1, 50);` in the original code to `numbers.insert(numbers.begin()+2, 50);`?
> - change `numbers.insert(numbers.begin()+1, 100);` in the original code to `numbers.insert(numbers.begin(), 100);`?

> <b>IMPORTANT</b>
> 
> The `begin()` function always refer to the first position in the vector, which is also the 0th index. If you want to refer to the 1st index, use `begin()+1`. For the 2nd index, use `begin()+2`, so on and so forth.

### Removing Vector Elements

To remove an element from the __end__ of a vector, use the `pop_back()`. Note that using `pop_back` will remove the element and its index, thus decreasing the size of the vector by 1.
```cpp
vector<int> numbers(0); //empty vector
numbers.push_back(50); //add 50 to vector
numbers.push_back(100); //add 100 to vector
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl << endl;

numbers.pop_back(); //remove last element vector
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl; //100 has been deleted completely
```

> <b>What happens if you:</b>
> 
> - remove `cout << numbers.at(1) << endl;` from the original code?

To remove an element from a __specific index__ in the vector, use the `erase()` function and specify the index you want to erase with `begin()`. When an element and its index is removed from the vector, all of the elements to its right will be moved one place to the left.
```cpp
vector<int> numbers(0); //empty vector
numbers.push_back(50); //add 50 to vector
numbers.push_back(100); //add 100 to vector
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl << endl;

numbers.erase(numbers.begin()); //removes 50
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl; //no longer exists
```

> <b>What happens if you:</b>
> 
> - remove `cout << numbers.at(1) << endl;` from the original code?
> - change `numbers.erase(numbers.begin());` from the original code to `numbers.erase(numbers.begin()+1);`?

> <b>Adding and Removing Vector Elements</b>
>
> Given the following code snippet:
> ```cpp
> vector<string> words(0);
> 
> words.push_back("I");
> words.push_back("love");
> words.erase(words.begin()+1);
> words.push_back("hate");
> words.insert(words.begin()+1, "really");
> words.insert(words.begin()+3, "bean sprouts");
> 
> cout << words.at(0) << " " 
>      << words.at(1) << " " 
>      << words.at(2) << " " 
>      << words.at(3);
> ```
> Determine the output that is produced.
> - `out_of_range` error
> - `I really love bean sprouts`
> - `I hate really bean sprouts`
> - `I really hate bean sprouts`
> 
> > <b>Answer:</b>
> >
> > `I really hate bean sprouts`
>
> > <b>Rationale:</b>
> >
> > By following the syntax for adding and removing vector elements, you should end up with the output I really hate bean sprouts.
> > 
> > __Code Flow:__
> > 
> > `words.push_back("I");` —> `I`
> > `words.push_back("love");` —> `I love`
> > `words.erase(words.begin()+1);` —> `I`
> > `words.push_back("hate");` —> `I hate`
> > `words.insert(words.begin()+1, "really");` —> `I really hate`
> > `words.insert(words.begin()+3, "bean sprouts");` —> `I > > > really hate bean sprouts`

## Modifying Elements

### Modifying Vector Elements

To modify vector elements, use the `at()` method to specify the index number and then assign a new element to it.
```cpp
vector<string> contact(0);
contact.push_back("First name");
contact.push_back("Last name");
contact.push_back("Phone number");
cout << contact.at(0) << " " 
     << contact.at(1) << " " 
     << contact.at(2) << endl;

contact.at(2) = "Email"; //change element at index 2 to "Email"
cout << contact.at(0) << " " 
     << contact.at(1) << " " 
     << contact.at(2) << endl;
```

> <b>What happens if you:</b>
> 
> - add `contact.at(1) = "Nick name";` to the line directly before `contact.at(2) = "Email";`?

### Initializing Vector Elements

It is possible to initialize elements inside a vector without constantly using `push_back()`. The following code will produce the same result as the original code above.
```cpp
vector<string> contact{"First name", "Last name", "Phone number"};
cout << contact.at(0) << " " 
     << contact.at(1) << " " 
     << contact.at(2) << endl;

contact.at(2) = "Email"; //change element at index 2 to "Email"
cout << contact.at(0) << " " 
     << contact.at(1) << " " 
     << contact.at(2) << endl;
```

When initializing elements within a vector, you do not specify the number of elements in parentheses. The system will automatically know how many elements are being added to the vector. The initialized elements should be in curly braces `{}` and separated by commas `,`.

> <b>Modifying Vector Elements</b>
>
> Construct a program using the code blocks below so that the following will be printed:
> ```
> Parker
> ```
> 
> - ```cpp
>   name.push_back("Peter");
>   ```
> - ```cpp
>   cout << name.at(0) << endl;
>   ```
> - ```cpp
>   name.at(0) = "Parker";
>   ```
> - ```cpp
>   vector<string> name(0);
>   ```
> 
> > <b>Answer:</b>
> >
> > ```cpp
> > vector<string> name(0);
> > name.push_back("Peter");
> > name.at(0) = "Parker";
> > cout << name.at(0) << endl;
> > ```
>
> > <b>Rationale:</b>
> >
> > Before any vector functions can be used, a vector must be created first, `vector<string> name(0);`. After the vector is created, you can then start adding elements to it, `name.push_back("Peter");`. Since the output is `Parker`, you want the cout statement to come after `name.at(0) = "Parker";`. Otherwise, `Peter` will be printed instead.
> > 
> > __Solution:__
> > ```cpp
> > vector<string> name(0);
> > name.push_back("Peter");
> > name.at(0) = "Parker";
> > cout << name.at(0) << endl;
> > ```

## Iterating a Vector

### Iterating Vector Elements

Iterating through a vector is very similar to iterating through an array. The main difference is that in a vector, we use `at()` to access the elements instead of brackets `[]`. Both of the code blocks below use a regular `for` to produce the exact same results. The first code block contains an array and the second contains a vector.
```cpp
//iterating through an array
int grades[] = {85, 95, 48, 100, 92};

for (int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++) {
    cout << grades[i] << endl;
}
```

```cpp
//iterating through an vector
vector<int> grades{85, 95, 48, 100, 92};

for (int i = 0; i < grades.size(); i++) {
    cout << grades.at(i) << endl;
}
```

### Enhanced For Loop in Vector

We can also use an __enhanced for loop__, or __range-based for loop__, to iterate through a vector.
```cpp
//iterating a vector with Enhanced For Loop
vector<int> grades{85, 95, 48, 100, 92};

for (auto i : grades) { //can use int or auto for iterating variable!
    cout << i << endl;
}
```

> <b>IMPORTANT</b>
> 
> When using an enhanced `for` loop for a vector, you must label the iterating variable accordingly. If your elements are of type `int` then your iterating variable must also be `int`. If the elements are `string`s then your variable must be typed as `string`. However, you can always use `auto` to force the variable to match your element type.

> <b>Iterating Vector Elements</b>
>
> Fill in the program below with code so that all elements of the vector `BMI` are printed.
> ```
> 18.5
> 25
> 30
> ```
> __Hint:__ Some code might be used more than once while others are not used at all.
> ```cpp
> ______<double> BMI(0);
> BMI._________(18.5);
> BMI._________(25.0);
> BMI._________(30.0);
> 
> for (______ d : ___) {
>     cout << _ << endl;
> }
> ```
> 
> > <b>Answer:</b>
> >
> > ```cpp
> > vector<double> BMI(0);
> > BMI.push_back(18.5);
> > BMI.push_back(25.0);
> > BMI.push_back(30.0);
> > 
> > for (double d : BMI) {
> >     cout << d << endl;
> > }
> > ```
>
> > <b>Rationale:</b>
> >
> > The correct syntax for creating an empty vector is `vector<double> BMI(0);`. `double` must be used instead of `int` in order for `18.5` to be printed. The `at()` function cannot be used on an empty vector. Only `push_back()` can be used to add elements to the empty vector. Since the vector is of type double, `double` should be used to type the iterating variable `d`. __Note__ that `auto` can also be used but it is not available as an option. On the other side of the colon `:` is the reference of the vector name `BMI`. Then the final step is to print `d` which has taken on all elements of the vector in order.
> > 
> > __Solution:__
> > ```cpp
> > vector<double> BMI(0);
> > BMI.push_back(18.5);
> > BMI.push_back(25.0);
> > BMI.push_back(30.0);
> > 
> > for (double d : BMI) {
> >     cout << d << endl;
> > }
> > ```

## Vector vs. Array

### Vector vs. Array

Which one is better: vector or array? The answer is, it really _depends_. If you know how many elements you need in your collection and you don’t intend on changing the order of those elements, then it is better to use an __array__. On the other hand, if you don’t know how many elements you need and want to modify the order of elements later on, then it is better to use a __vector__.

Although an array is shorter to write and arguably easier to use, it is __static__, meaning it is not possible to add additional elements to the array after it has already been initialized. In contrast, a vector is more __dynamic__, meaning you can add, remove, and reorganize elements as needed later on.

Here is a table showing the differences between vectors and arrays. Note that `type` stands for data type. Also note that `var` stands for vector or array name, `num` stands for an integer number, `index` stands for index or position number, and `element` stands for a vector or array element.

| Method/Types | Vector | Array |
|--------------|--------|-------|
| Create	   | vector<type> var(num) or vector<type> var{element, element…} | type var[num] or type var[] = {element, element…}
| Find number of elements | var.size() | sizeof(var)/sizeof(var[0]) |
| Access an element	| var.at(index) | var[index] |
| Modify an element | var.at(index) = element | var[index] = element |
| Add an element | var.push_back(element) or var.insert(var.begin()+index, element) | n/a |
| Remove an element | var.pop_back() or var.erase(var.begin()+index) | n/a |
| for loop | for (int i = 0; i < var.size(); i++) {cout << var.at(i);} | for (int i = 0; i < sizeof(var)/sizeof(var[0]); i++) {cout << var[i];}
| Enhanced for loop | for (type i : var) {cout << i} | for (type i : var) {cout << i} |
| Common compatible types | integer, double, boolean, strings | int, double, boolean, strings |

### Using Both a Vector and Array

Vectors and arrays can be used in tandem with each other. For example, the following code keeps track of the top five students in a class.
```cpp
string top[] = {"First: ", "Second: ", "Third: ", "Fourth: ", "Fifth: "};
vector<string> names(0);

names.push_back("Alan");
names.push_back("Bob");
names.push_back("Carol");
names.push_back("David");
names.push_back("Ellen");

for (int i = 0; i < 5; i++) {
  cout << top[i] << names.at(i) << endl;
}
```

> <b>Without deleting any existing code, try to:</b>
> 
> - switch `Alan` and `Carol`'s places.
> - replace `David` with `Fred`.
> - make `Grace` get “Fifth” place and remove `Ellen` from the list.

> <b>Sample Solution</b>
> 
> ```cpp
> string top[] = {"First: ", "Second: ", "Third: ", "Fourth: ", "Fifth: "};
> vector<string> names(0);
> 
> names.push_back("Alan");
> names.push_back("Bob");
> names.push_back("Carol");
> names.push_back("David");
> names.push_back("Ellen");
>   
> names.at(0) = "Carol"; //switch Alan with Carol
> names.at(2) = "Alan";  //and vice versa
> 
> names.at(3) = "Fred"; //Fred replaces David
>   
> names.insert(names.begin()+4, "Grace"); //Grace takes Ellen's place
> names.pop_back(); //Ellen's "Sixth" place gets removed
> 
> for (int i = 0; i < 5; i++) {
>     cout << top[i] << names.at(i) << endl;
> }
> ```

> <b>Vector or Array?</b>
>
> Fill out the following statements with either `Vector` or `Array` depending on whether each statement is true to one or the other.
> 1. Can access elements using brackets as indices `[]`: _____
> 2. Can add or remove elements after being created: _____
> 3. Can change the order of elements without modifying existing elements: _____
> 4. Can use `sizeof()` to determine the number of elements: _____
> 
> > <b>Answer:</b>
> >
> > 1. Can access elements using brackets as indices `[]`: <u>Array</u>
> > 2. Can add or remove elements after being created: <u>Vector</u>
> > 3. Can change the order of elements without modifying existing elements: <u>Vector</u>
> > 4. Can use `sizeof()` to determine the number of elements: <u>Array</u>
>
> > <b>Rationale:</b>
> >
> > Although it is possible to initialize elements at the start, arrays are __static__ so adding or removing elements after initialization is not possible. On the other hand, vectors are __dynamic__ so it is possible to add, remove, and reorder elements. Arrays use `sizeof()` while vectors use `size()` to determine the number of existing elements.

## Helpful Vector Algorithms

### Vector Algorithms

Like arrays, vectors can be used to search for a particular element and to find a minimum or maximum element. Additionally, vectors can reverse the order of elements rather than just simply printing the elements in reverse order.

__Searching for a Particular Element__
```cpp
vector<string> cars(0);
string Camry = "A Camry is not available."; //default string value

cars.push_back("Corolla");
cars.push_back("Camry");
cars.push_back("Prius");
cars.push_back("RAV4");
cars.push_back("Highlander");

for (auto a : cars) { //enhanced for loop
    if (a == "Camry") { //if "Camry" is in vector
        Camry = "A Camry is available."; //variable changes if "Camry" exists
    }
}
    
cout << Camry << endl; //print whether Camry exists or not
```

> <b>What happens if you:</b>
> 
> - add `cars.erase(cars.begin()+1);` to the line directly below `cars.push_back("Highlander");`?
> - try to modify the code above so that the algorithm will look for `Prius` in the array and will print `A Prius is available.` if `Prius` is an element and `A Prius is not available.` if it is not an element.

> <b>Sample Solution</b>
> 
> ```cpp
> vector<string> cars(0);
> string Prius = "A Prius is not available.";
>   
> cars.push_back("Corolla");
> cars.push_back("Camry");
> cars.push_back("Prius");
> cars.push_back("RAV4");
> cars.push_back("Highlander");
> 
> for (auto a : cars) {
>     if (a == "Prius") {
>         Prius = "A Prius is available.";
>     }
> }
>     
> cout << Prius << endl;
> ```

__Finding a Minimum or Maximum Value__

```cpp
vector<int> grades(0);
grades.push_back(72);
grades.push_back(84);
grades.push_back(63);
grades.push_back(55);
grades.push_back(98);

int min = grades.at(0); //set min to the first element in the array

for (auto a : grades) { //enhanced for loop
    if (a < min) { //if element is less than min
        min = a; //set min to element that is less
    }
}
//elements are not modified so enhanced for loop can be used

cout << "The lowest grade is " << min << endl; //print lowest element
```

> <b>What happens if you:</b>
> 
> - add `grades.at(0) = 42;` to the line directly below `grades.push_back(98);`?
> - try to modify the code so that the algorithm will look for the __maximum__ element instead?

> <b>Sample Solution</b>
> 
> ```cpp
> vector<int> grades(0);
> grades.push_back(72);
> grades.push_back(84);
> grades.push_back(63);
> grades.push_back(55);
> grades.push_back(98);
>   
> int max = grades.at(0);
> 
> for (auto a : grades) {
>     if (a > max) {
>         max = a;
>     }
> }
> 
> cout << "The highest grade is " << max << endl;
> ```

__Reversing the Order of Elements__

```cpp
vector<string> letters(0);
letters.push_back("A");
letters.push_back("B");
letters.push_back("C");
letters.push_back("D");
letters.push_back("E");
    
int original = letters.size(); //original size
    
//regular for loops needed to access element indices

for (int i = letters.size() - 1; i >= 0; i--) {
    letters.push_back(letters.at(i));
} //add elements in reverse order to the vector
    
for (int j = 0; j < original; j++) {
    letters.erase(letters.begin());
} //remove all the original elements

//enhanced for loop can be used for just printing
for (auto a : letters) {
    cout << a << " "; //print all new vector elements
}
```

> <b>IMPORTANT</b>
> 
> Note that we used `letters.erase(letters.begin())` which causes the system to delete both the __element__ and the __index__. Thus, the next element in the vector becomes the _new_ 0th index which we want to continue to delete.

> <b>Vectors, Loops, and Conditionals</b>
>
> On a student’s first four tests, they received scores in the following order: `68`, `92`, `100`, and `88`.
> 
> Fill in the blanks below with code so that the program will print `You got a perfect score!` if the student scored as least one `100` and will print `Keep up the hard work!` if they did not.
> ```cpp
> vector<int> scores(0);
> scores._________(68);
> scores._________(92);
> scores._________(100);
> scores._________(88);
>     
> ______ feedback = "";
> 
> ___ (auto a : ______) {
>   if (a == ___) {
>       _________ = "You got a perfect score!";
>       break;
>   }
>   ____ {
>       feedback = "Keep up the hard work!";
>   }
> }
>     
> cout << _________ << endl;
> ```
> 
> > <b>Answer:</b>
> >
> > ```cpp
> > vector<int> scores(0);
> > scores.push_back(68);
> > scores.push_back(92);
> > scores.push_back(100);
> > scores.push_back(88);
> >     
> > string feedback = "";
> > 
> > for (auto a : scores) {
> >     if (a == 100) {
> >         feedback = "You got a perfect score!";
> >         break;
> >     }
> >     else {
> >         feedback = "Keep up the hard work!";
> >     }
> > }
> >     
> > cout << feedback << endl;
> > ```
>
> > <b>Rationale:</b>
> >
> > __Guide:__
> > - All of the test scores need to be added to `scores` using `push_back()`.
> > - `feedback` is of type `string`.
> > - Enhanced `for` loop is needed due to the given syntax `(auto a : scores)`.
> > - If the iterating variable equals `100`, then `You got a perfect score!` will be assigned to `feedback`.
> > - `else`, `Keep up the hard work!` will be assigned.
> > - Lastly, the program should print the resulting `feedback`.

## Formative Assessment 1

> <b>Modifying a Shopping List</b>
>
> Your shopping list is stored in a vector and when printed gives you the following output:
> ```
> Apple
> Banana
> Banana
> Dumpling
> ```
> You notice that you accidentally added `Banana` twice and you had meant to add `Carrot` after the _first_ `Banana`. Assuming that your vector is called `list`, which of the following commands will modify `list` so that printing it will produce:
> ```
> Apple
> Banana
> Carrot
> Dumpling
> ```
> - ```cpp
>   list.push_back("Carrot");
>   ```
> - ```cpp
>   list.erase(list.begin()+2);
>   ```
> - ```cpp
>   list.at(1);
>   ```
> - ```cpp
>   list.at(2) = "Carrot";
>   ```
> 
> > <b>Answer:</b>
> >
> > ```cpp
> > list.at(2) = "Carrot";
> > ```
>
> > <b>Rationale:</b>
> >
> > Only choice __#4__ will modify the `list` so that `Carrot` will replace `Banana` at index 2. Choice __#1__ will only add `Carrot` to the end of the `list`. Choice __#2__ will only remove the second `Banana` stored at index 2. And finally, choice __#3__ will just access index 1 without modifying any elements.

## Formative Assessment 2

> <b>Decoding the Message</b>
>
> Given the following program:
> ```cpp
> vector<string> message(0);
> message.push_back("a");
> message.push_back("bad");
> message.insert(message.begin(), "today");
> message.at(1) = "is";
> message.erase(message.begin()+2);
> message.push_back("good");
> message.insert(message.begin()+2, "a");
> message.push_back("day");
> 
> for (auto a : message) {
>     cout << a;
> }
> ```
> Determine the message that is outputted.
> - ```cpp
>   todayisagoodday
>   ```
> - ```cpp
>   today is a bad day
>   ```
> - ```cpp
>   a bad today is good a today
>   ```
> - ```cpp
>   abaddayisagoodday
>   ```
> 
> > <b>Answer:</b>
> >
> > ```cpp
> > todayisagoodday
> > ```
>
> > <b>Rationale:</b>
> >
> > To decode the message, follow each command below:
> > 
> > - message.push_back(“a”); —> a
> > - message.push_back(“bad”); —> abad
> > - message.insert(message.begin(), “today”); —> todayabad
> > - message.at(1) = "is"; —> todayisbad
> > - message.erase(message.begin()+2); —> todayis
> > - message.push_back(“good”); —> todayisgood
> > - message.insert(message.begin()+2, “a”); —> todayisagood
> > - message.push_back(“day”); —> todayisagoodday
> > - cout << a; —> `todayisagoodday`
> > 
> > __Note__ that the enhanced for loop will iterate through the elements and print them __without__ any newlines nor spaces.