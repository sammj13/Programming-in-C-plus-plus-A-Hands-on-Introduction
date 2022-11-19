# Lab: Pointer Operators

## Tutorial Lab: Reference and Dereference Operators

Pointers are used to store the memory address of a particular variable. Two important operators associated with pointers are the __reference__ `&` and the __dereference__ operators `*`. The `&` operator returns the __memory address__ of a variable and the `*` operator returns the __value__ or content of the variable being pointed to.

```cpp
bool b = true;
bool* p = &b;

cout << p << endl; //prints b's memory address
cout << boolalpha << *p << endl; //prints b's value
```

A pointer can also point to __another pointer__. When doing so, the new pointer will be denoted with two asterisk symbols `**`. `**` is also used to dereference a pointer twice.

```cpp
bool b = true;
bool* p = &b;
bool** p2 = &p; //p2 points to p

cout << p2 << endl; //prints p's memory address
cout << *p2 << endl; //prints p's content which is b's address
cout << boolalpha << **p2 << endl;
//p2 is dereferenced twice to print b's value
```

> <b>Age Pointer</b>
> 
> Fill in the code below so that the pointer `p2` becomes associated with the integer variable `age` and when printed, the __value__ of `age` is outputted.
> ```cpp
> ___ age = 12;
> int_ p1 = _age;
> int** p2 = &__;
> 
> cout << __p2 << endl;
> ```
>
> > <b>Answer:</b>
> >
> > ```cpp
> > int age = 12;
> > int* p1 = &age;
> > int** p2 = &p1;
> > 
> > cout << **p2 << endl;
> > ```
>
> > <b>Rationale:</b>
> >
> > First, the integer variable `age` needs to be typed as an `int`. Next, the pointer `p1` needs to be denote with `*` and can only be assigned a memory address, `&age`. `p2` is an `int` pointer that points to another pointer `p1`. To print the value of `age`, `p2` needs to be dereferenced twice. The first dereference will return the memory address that `p1` is pointing to, which is `age`'s memory address. The second dereference will return the value of `age` which is `12`.

# Lab Challenge: Pointer Keys

## Pointer Keys

You are trying to come up with a set of pointers or keys that, when referred to, will be able to tell you the age of each of your family members. For example, the pointer `amy` should be associated with the variable `age1`.

So far you have the following information in your code:
```cpp
#include <iostream>
using namespace std;

int main() {

    int age1 = 12;
    int age2 = 31;
    int age3 = 29;
    int* amy;
    int* bob;
    int** carol;
    
    //add code below this line
    
    
    cout << *amy << endl; //do not edit
    
    cout << *bob << endl; //do not edit
    
    cout << **carol << endl; //do not edit
    
    
    //add code above this line 
    
    return 0;
    
}
```

## Pointer Challenge

__Pointer Keys Challenge:__

Your task is to associate the pointers within the code to their respective variables. The output of your program should produce:

```
Amy's age is: 12
Bob's age is: 31
Carol's age is: 29
```

__Requirement:__

- Only __add__ to the existing code, __do not__ make any changes, otherwise, you will not receive credit for your work. If you accidentally delete any existing code, you can copy the original code shown above back into your program.
- You __must__ use the pointers `amy`, `bob`, and `carol` in your code and assign the pointers to their appropriate data.
- __NOTE__ that the pointer `carol` is a pointer to another pointer. You will need to create a new pointer in your code to make the association.