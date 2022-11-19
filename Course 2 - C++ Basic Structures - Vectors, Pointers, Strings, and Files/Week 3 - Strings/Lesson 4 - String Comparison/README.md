# String Iteration

## Learning Objectives: String Iteration

- Define string iteration
- Identify two ways to iterate over a string
- Explain the inner workings of string iteration

## Iteration: For Loop

### Iterating Over Strings

Iterating over a string allows you to deal with each character of a string individually without having to repeat certain commands. You start with the character at index `0` and move through the end of the string.

```cpp
string my_string = "Hello world";

for (int i = 0; i < my_string.length(); i++) {
    cout << my_string.at(i);
}
```

> <b>What happens if you:</b>
> 
> - Change the value of `my_string` to `"\u25A3\u25A8\u25D3\u25CC\u25A2"`?
>   - __Note:__ Some Unicode characters are not compatible with `cout` and/or `endl;` commands.
> - Change the value of `my_string` to `"10, 11, 12, 13, 14"`?
> - Change the `cout` statement to `cout << my_string.at(i) << endl;`?
> - Change the `cout` statement to `cout << my_string;`?

__Note__ that you can also use a __range-based__ or __enhanced__ `for` loop to iterate over strings. Make sure to cast the iterating variable as `char`!

```cpp
string my_string = "Hello world";

for (char c : my_string) {
    cout << c;
}
```

> <b>Iterating Strings with Enhanced For Loop</b>
> 
> Assume you have a string variable `string mystery_string = "mystery";`. Fill in the blanks below so that the program prints each character of `mystery_string` like so:
> ```
> m
> y
> s
> t
> e
> r
> y
> ```
> ```cpp
> for (____ c : ______________) {
>     cout << _ << ____;
> }
> ```
> 
> > <b>Answer:</b>
> > 
> > ```cpp
> > for (char c : mystery_string) {
> >     cout << c << endl;
> > }
> > ```
> 
> > <b>Rationale:</b>
> > 
> > The problem requires you to use an enhanced or range-based `for` loop. To start, you must cast the iterating variable `c` as `char`. Then specify the string variable as `mystery_string`. Since `c` will now take on each character of the string, you can output `c` with `endl` to get the desired result.

## Iteration: While Loop

### While Loop

String iteration is most often done with a `for` loop. However, a `while` can be used as well.

```cpp
string my_string = "Calvin and Hobbes";
int i = 0;

while (i < my_string.length()) {
    cout << my_string.at(i);
    i++;
}
```

> <b>What happens if you:</b>
> 
> - Change the loop to `while (i <= my_string.length())`?
> - Copy the original code but change the `cout` statement to `cout << i;`?
> - Copy the original code but remove `i++;`?

### Comparing While & For Loops

```cpp
string my_string = "C++";

for (int i = 0; i < my_string.length(); i++) {
    cout << my_string.at(i);
}
```

```cpp
string my_string = "C++";
int i = 0;

while (i < my_string.length()) {
    cout << my_string.at(i);
    i++;
}
```

Above are two ways of iterating through a string. The first way uses the `for` loop and the second uses a `while` loop. Both produces the same result. However, the `for` loop is usually preferred because it requires less code to accomplish the same task. You can also use an enhanced `for` loop, which requires the least account of code, but an enhanced `while` loop does not exist.

> <b>Iterating Strings with While Loop</b>
> 
> Assume you have a string variable called `my_string`. Fill in the blanks below so that the program uses a while loop to iterate over `my_string` and print each character.
> ```cpp
> string my_string = "Codio";
> int len = my_string.length();
> int i = 0;
> 
> while (i < len) {
>     cout << my_string.at(i);
>     i++;
> }
> ```
> 
> > <b>Answer:</b>
> > 
> > ```cpp
> > string my_string = "Codio";
> > int len = my_string.length();
> > int i = 0;
> > 
> > while (i < len) {
> >     cout << my_string.at(i);
> >     i++;
> > }
> > ```
> 
> > <b>Rationale:</b>
> > 
> > First, you should recognize that both `len` and `i` should be typed as `int` because one returns an integer (`len`) and the other is a counting variable (`i`). Next, the cout statement needs to incorporate the string `my_string` followed by the function at and i as the parameter. Remember, we are referencing the character at each index from beginning to end and `at(i)` allows us to do that. The last step is to increment the counting variable `i` by one, otherwise it will not traverse the string and result in an infinite loop.

## Formative Assessment 1

> <b>String Iteration For Loop</b>
> 
> Use the code below to help you answer the following question:
> ```cpp
> string my_string = "Hello world";
> for (int i = 0; i < my_string.length(); i++) {
>     cout << my_string.at(i);
> }
> ```
> What does the variable `i` represent?
> - `i` represents each index or character of `my_string`.
> - `i` represents the length of `my_string`.
> - `i` represents a copy of `my_string`.
> - `i` represents the data type of `my_string`.
> 
> > <b>Answer:</b>
> > 
> > `i` represents each index or character of `my_string`.
> 
> > <b>Rationale:</b>
> > 
> > `i` is also known as the iterating variable and in strings, `i` takes on the index of each character of the string.

## Formative Assessment 2

> <b>String Iteration While Loop</b>
> 
> Rearrange the code blocks below to construct a program that outputs:
> ```
> Today is a good day
> ```
> __Hint:__ You will not need to use all of the code blocks.
> - ```cpp
>   cout << my_string.at(i) << endl;
>   ```
> - ```cpp
>   int i = 0;
>   ```
> - ```cpp
>   i++;
>   ```
> - ```cpp
>   }
>   ```
> - ```cpp
>   int i = my_string.length();
>   ```
> - ```cpp
>   string my_string = "Today is a good day";
>   ```
> - ```cpp
>   cout << my_string.at(i);
>   ```
> - ```cpp
>   while (my_string.length() < i) {
>   ```
> - ```cpp
>   while (i < my_string.length()) {
>   ```
> 
> > <b>Answer:</b>
> > 
> > ```cpp
> > string my_string = "Today is a good day";
> > int i = 0;
> > while (i < my_string.length()) {
> >     cout << my_string.at(i);
> >     i++;
> > }
> > ```
> 
> > <b>Guide:</b>
> > 
> > 1. Create the string: `string my_string = "Today is a good day";`
> > 2. Create the counting variable `i` to keep track of string indices.
> > 3. Keep iterating through the string while `i` is less than the length of the string.
> > 4. Print the string horizontally with `cout` instead of `cout` with `endl` and access each index of each character by using `my_string.at(i)`.
> > 5. Increment the counting variable `i`.