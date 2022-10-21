<h1 align="center">
	📖 get_next_line
</h1>

### 🗝️ Original in [**Russian**](https://github.com/AYglazk0v/GNL/blob/master/README.md)

## 💡 About the project:

> _The goal of the project is to write a function that returns a string read from a file descriptor._
	You will understand how files are opened, read, and closed in the OS and how they are interpreted by the
	programming language for further analysis.
	Understanding this task is critical for the future programmer because most of the time
	is based on manipulating files to manage and save data.
	This project consists of writing a function that returns one line at a time from a file.

For more information, refer to [**subject**](https://github.com/MKKurbandibirov/get_next_line/blob/master/Subject.pdf).


## 🛠️ Usage

### Requirements

The function is written in C and therefore needs the `gcc` compiler and some standard C libraries to execute it.

### Instructions

**1. Usage**

To use the function in your project, you need to include a header file:

```C
#include "get_next_line.h"
```
Also when compiling the project you will need to include the appropriate files and specify a special flag: 

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

## 📋 Testing

In order to test the function you need to write `main.c` and run the command below:

```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c main.c get_next_line_utils.c && ./a.out
```

You can also check the correctness of operation with a tester:

* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester)
