# Writing to a File

## Learning Objectives: Writing

- Demonstrate how to open a file and write to it using `ofstream`
- Explain what happens when you write to a file that does not exist
- Demonstrate how to write multiline strings to a file
- Differentiate between input, output, and append modes

## Writing to a File

### Writing to a File

When writing to a file, you’ll want to use ofstream instead of `ifstream`. Like before, create your string path, open the file, and check for whether it can be opened successfully.

```cpp
string path = "student/text/practice1.txt";

try {
    ofstream file;
    file.open(path);
    if (!file) {
        throw runtime_error("File failed to open.");
    }
}
  
catch (exception& e) { //catch error
    cerr << e.what() << endl;
}
```

If the file is successfully opened, you can start writing to the file using the insertion operator `<<` followed by what you want to write in double quotes `""`. Remember to close the file, and if you want, you can print a message at the end telling the user that that the file was successfully written to.

```cpp
string path = "student/text/practice1.txt";

try {
    ofstream file;
    file.open(path);
    if (!file) {
        throw runtime_error("File failed to open.");
    }
    file << "Hello there";
    file.close();
    cerr << "Finished writing to file.";
}
  
catch (exception& e) { //catch error
    cerr << e.what() << endl;
}
```

Open `practice1.txt` to see what was wrttien.

> <b>Try these variations:</b>
> 
> _Open the `practice1.txt` file after each change to see what gets written._
> - Change `"Hello there"` to `"Goodbye"`.
> - Change `"Goodbye"` in your current code to `""`.
> 
> __Why is there no error message?__
> 
> If you tell C++ to create an `ofstream` file, it will automatically create that file if one does not exist. Or it will overwrite the existing file with a new one. This is why you do not see an error message. You will only see an error message if for some reason the system is not able to create the file at all.

### Reading a Written File

If you want to read from the file after it was written to, you can create an `ifstream` to read from the file.

```cpp
string path = "student/text/practice1.txt";

try {
    ofstream file;
    file.open(path);
    if (!file) {
        throw runtime_error("File failed to open.");
    }
    file << "Hello there";
    file.close();
    
    ifstream stream;
    string read;
    stream.open(path);
    while (getline(stream, read)) {
        cout << read << endl;
    }
    stream.close();
}
  
catch (exception& e) { //catch error
    cerr << e.what() << endl;
}
```

> <b>What happens if you:</b>
> 
> - Change `"Hello there"` to `"Hi!"`.
> - Add `file << " My name is AI." << endl;` to the line after `file << "Hi!";`?

> <b>Writing to a File</b>
> 
> Which of the following commands will write `¡Hola!` to the file called `my_file`?
> - ```cpp
>   my_file.write("¡Hola!");
>   ```
> - ```cpp
>   cout << "¡Hola!";
>   ```
> - ```cpp
>   my_file << "¡Hola!";
>   ```
> - ```cpp
>   cout << my_file;
>   ```
> 
> > <b>Answer:</b>
> > 
> > ```cpp
> > my_file << "¡Hola!";
> > ```
> 
> > <b>Rationale:</b>
> > 
> > Of all of the choices, only the `my_file << "¡Hola!";` command will write `¡Hola!` to the file `my_file. cout << "¡Hola!";` will simply print `¡Hola!` to the screen, `cout << my_file;` will attempt to print the file, and `my_file.write("¡Hola!");` contains invalid syntax.

## Multiline Strings

In addition to being able to write and output string literals (e.g. `file << "Hi!";`), we can also write and output the content of variables (e.g. `file << var;`). Let’s tweak the code from the previous page to write multiple messages to a text file called `practice2.txt`. We’ll create three string variables, `text1`, `text2`, and `text3`. The first message will go into a string variable `text1`, the second will go into `text2`, and the third will go into `text3`.

```cpp
string path = "student/text/practice2.txt";

try {
    ofstream file;
    file.open(path);
    if (!file) {
        throw runtime_error("File failed to open.");
    }
    string text1 = "Hello, ";
    string text2 = "your balance is: ";
    string text3 = "12.34";
    file << text1 + text2 + text3;
    file.close();
    
    ifstream stream;
    string read;
    stream.open(path);
    while (getline(stream, read)) {
        cout << read << endl;
    }
    stream.close();
}
  
catch (exception& e) { //catch error
    cerr << e.what() << endl;
}
```

> <b>What happens if you:</b>
> 
> - Change `string text3 = "12.34";` to `double text3 = 12.34;`?
> - Change `file << text1 + text2 + text3;` to `file << text1 + text2 << text3;`?
> - Split the code `file << text1 + text2 << text3;` into two lines:
>   ```cpp
>   file << text1 + text2 << endl;
>   file << text3;
>   ```
> - Change `file << text1 + text2 << endl;` to `file << text1 + text2 << '\n';`?
> - Change `file << text1 + text2 << '\n';` to `file << "Hello, your balance is:\n12.34";` and remove `file << text3;`?

Notice how you can also write the content of other types of data (double, int, etc.) to a file. You are not restricted to just strings. Also, there are multiple ways to write the same kind of content to a file.

> <b>Writing Multiple Strings</b>
> 
> You want to write the following exact text to a file:
>   ```
>   Once upon a time
>   In a land far, far away
>   Lived a king and queen
>   ```
> Assuming that you are using an `ofstream` object called `file` to write to, select all of the valid ways in which you can do this.
> 
> __Hint:__ There is more than one correct answer.
> - ```cpp
>   string text1 = "Once upon a time";
>   string text2 = "In a land far, far away";
>   string text3 = "Lived a king and queen";
>   file << text1;
>   file << text2;
>   file << text3;
>   ```
> - ```cpp
>   string text1 = "Once upon a time";
>   string text2 = "In a land far, far away";
>   string text3 = "Lived a king and queen";
>   file << text1 << endl;
>   file << text2 << '\n';
>   file << text3 << endl;
>   ```
> - ```cpp
>   file << "Once upon a time\nIn a land far, far away\nLived a king and queen";
>   ```
> - ```cpp
>   string text1 = "Once upon a time\n";
>   string text2 = "In a land far, far away\n";
>   string text3 = "Lived a king and queen\n";
>   file << text1;
>   file << text2;
>   file << text3;
>   ```
> - ```cpp
>   string text1 = "Once upon a time";
>   string text2 = "In a land far, far away";
>   string text3 = "Lived a king and queen";
>   file << text1\n << text2\n << text3\n;
>   ```
> 
> > <b>Answer:</b>
> > 
> > - ```cpp
> >   string text1 = "Once upon a time";
> >   string text2 = "In a land far, far away";
> >   string text3 = "Lived a king and queen";
> >   file << text1 << endl;
> >   file << text2 << '\n';
> >   file << text3 << endl;
> >   ```
> > - ```cpp
> >   file << "Once upon a time\nIn a land far, far away\nLived a king and queen";
> >   ```
> > - ```cpp
> >   string text1 = "Once upon a time\n";
> >   string text2 = "In a land far, far away\n";
> >   string text3 = "Lived a king and queen\n";
> >   file << text1;
> >   file << text2;
> >   file << text3;
> >   ```
> 
> > <b>Rationale:</b>
> > 
> > All of the choices are correct with the __exception__ of two of them.
> > 
> > This option below is incorrect because it does not include any newline characters (e.g. `endl` or `\n`). This causes the text to be written continuously without any breaks.
> > ```cpp
> > string text1 = "Once upon a time";
> > string text2 = "In a land far, far away";
> > string text3 = "Lived a king and queen";
> > file << text1;
> > file << text2;
> > file << text3;
> > ```
> > This other option is incorrect because it contains invalid syntax.
> > ```cpp
> > string text1 = "Once upon a time";
> > string text2 = "In a land far, far away";
> > string text3 = "Lived a king and queen";
> > file << text1\n << text2\n << text3\n;
> > ```
> > __Note__ that `\n` is a newline character while `text1` is a string variable. You cannot attach a newline character to the end of a string variable and expect the variable to register it. You can however, do something like this, `file << text1 + '\n' + text2 + '\n' + text3 + '\n';`, or this, `file << text1 << '\n' << text2 << '\n' << text3 << '\n';`.

## Appending to a File

You may have noticed that every time a file is opened using an `ofstream` object, a new file is always created, even if one already exists (the system just overwrites the existing file). If you want to add to an existing file, you have to tell C++ to open the file in __append__ mode.

```cpp
string path = "student/text/practice3.txt";

try {
    ofstream file;
    file.open(path, ios::app); //open file in append mode
    if (!file) {
        throw runtime_error("File failed to open.");
    }
    string text = "Adding to the file.";
    file << text;
    file.close();
    
    ifstream stream;
    string read;
    stream.open(path);
    while (getline(stream, read)) {
        cout << read << endl;
    }
    stream.close();
    }
  
catch (exception& e) { //catch error
    cerr << e.what() << endl;
}
```

Since there is no `practice3.txt` file at the start of the program, C++ will create one. However, try running the code again and see what happens.

You’ll notice that the output `Adding to the file.` shows up twice in the file. This happens because we have included the tag `ios::app` as a second parameter when we opened up the file `practice3.txt`. By default, an ofstream object has the flag `ios::out` as a second parameter, which causes the file to always get overwritten. By changing the parameter to `ios::app`, we’re telling the system to add to the file instead of overwriting it.

> <b>What happens if you:</b>
> 
> - Change `ios::app` in the code to `ios::out`?
> - Change `ios::out` to `ios::in`?
> - Change `file << text;` to `file << text << text;`?
> - Change `file << text << text;` to `file << "Hello";`?
> - Change `ios::in` back to `ios::app`?

If you follow through the challenges above, you’ll notice that when the flag is set to input mode `ios::in`, the system will overwrite the content without creating a new file or overwriting the old one. On the other hand, `ios::app` will add to the end of the existing content. Lastly, `ios::out` creates a completely new file and writes to it.

> <b>Modifying File Content</b>
> 
> Currently, the `ofstream` object called file has the following content from `text.txt`:
> ```
> Rain is in the forecast today.
> ```
> If you want the content to change to:
> ```
> Snow is in the forecast today.
> ```
> Which of the following commands will enable you to do so?
> - ```cpp
>   file.open("text.txt", ios::in);
>   file << "Snow";
>   ```
> - ```cpp
>   file.open("text.txt", ios::out);
>   file << "Snow";
>   ```
> - ```cpp
>   file.open("text.txt", ios::app);
>   file << "Snow is in the forecast today.";
>   ```
> - ```cpp
>   file.open("text.txt", ios::app);
>   file << "Snow";
>   ```
> 
> > <b>Answer:</b>
> > 
> > ```cpp
> > file.open("text.txt", ios::in);
> > file << "Snow";
> > ```
> 
> > <b>Rationale:</b>
> > 
> > `ios::app` will only allow you to add to the __end__ of the content in the file. Which means neither of the choices with `ios::app` will allow you to change the content accordingly.
> > 
> > `ios::out` will create an entirely new file and since you’re only writing `Snow`, the file will only contain one word.
> > 
> > This leaves `ios::in` as the correct choice because input mode allows you to overwrite the content without creating a new file. Therefore, `Rain` will be replaced by `Snow`.

## Formative Assessment 1

> <b>Reading and Writing a File</b>
> 
> Fill in the code snippet below so that `file` is read from and then the content of it is written to `file2`.
> 
> __Note:__ Not all choices will be used.
> - ```cpp
>   string path = "student/text/readpractice.txt";
>   string path2 = "student/text/readpractice2.txt";
>   
>   ifstream file;
>   ofstream file2;
>   ______ read;
>     
>   file.____(path);
>   file2.____(path2);
>   while (getline(____, ____)) {
>       _____ << read << endl;
>   }
>   
>   file._______;
>   file2._______;
>   ```
> 
> > <b>Answer:</b>
> > 
> > ```cpp
> > string path = "student/text/readpractice.txt";
> > string path2 = "student/text/readpractice2.txt";
> > 
> > ifstream file;
> > ofstream file2;
> > string read;
> >   
> > file.open(path);
> > file2.open(path2);
> > while (getline(file, read)) {
> >     file2 << read << endl;
> > }
> >   
> > file.close();
> > file2.close();
> > ```
> 
> > <b>Rationale:</b>
> > 
> > From the existing code, you know that `file` is an `ifstream` object while `file2` is an `ofstream` object. That means you’ll need to read from `file`, store its content into a variable, and then write that content into `file2`. The variable storing the content should be a `string` variable in order to hold all of the characters. Therefore, `read` is of type `string`.
> > 
> > Before reading and writing can happen, you have to `open` the files first and give them the appropriate string path. Then iterate through the `ifstream` `file` and store the content into `read`. This can be accomplished using `while (getline(file, read))`. To write the content to `ofstream` `file2`, use the insertion operator and choose `read` as the content variable, `file2 << read << endl;`. This will write everything that was stored in `read` to `file2`.
> > 
> > Finally, `close()` the files to clear memory.

## Formative Assessment 2

> <b>Writing a Message</b>
> 
> Drag and arrange the code blocks below so that the following is written to `text.txt`:
> ```
> Writing to files
> is fun!
> ```
> __Note:__ Not all code blocks will be used.
> - ```cpp
>   file.open("text.txt");
>   ```
> - ```cpp
>   file << "is fun!";
>   ```
> - ```cpp
>   ifstream file;
>   ```
> - ```cpp
>   ofstream.open("text.txt");
>   ```
> - ```cpp
>   ofstream file;
>   ```
> - ```cpp
>   file << "Writing to files";
>   ```
> - ```cpp
>   file << "Writing to files" << endl << "is fun!";
>   ```
> 
> > <b>Answer:</b>
> > 
> > ```cpp
> > ofstream file;
> > file.open("text.txt");
> > file << "Writing to files" << endl << "is fun!";
> > ```
> 
> > <b>Rationale:</b>
> > 
> > To write to a file, you need to create an `ofstream` object instead of `ifstream`. Then open the appropriate file using `file.open("text.txt")`. Finally, use the insertion operator to write the desired message to the file, `file << "Writing to files" << endl << "is fun!"`.
> >
> > __Note__ that `endl` is a newline character, which is needed to write the expected content. `file << "Writing to files"` and `file << "is fun!"` do not contain a newline character, making them incorrect choices.