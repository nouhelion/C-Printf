# Makefile for Printf Project

# Define the target executable
TARGET = myprintf

# Source files
SRCS = myprintf.c main.c

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Build the project
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Run the executable
run: $(TARGET)
	./$(TARGET)

# Clean the build
clean:
	rm -f $(TARGET)

# Define the README content as a variable
define README_CONTENT
# Printf Project

## Overview

This project is an implementation of the `printf` function in C programming language. The `printf` function is used to print formatted output to the standard output stream. The goal of this project is to create a custom version of `printf` with support for a subset of format specifiers and options.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Installation

To use the custom `printf` function, follow these steps:

1. Clone the repository to your local machine:
git clone https://github.com/nouhelion/printf.git

3. Navigate to the project directory:
cd printf

5. Compile the source code:
gcc -o myprintf myprintf.c main.c

7. Run the executable:
./myprintf

## Usage

The custom `printf` function can be used just like the standard `printf` from the C library. Include the header file `"myprintf.h"` in your C source files to use the function.

```c
#include "myprintf.h"

int main() {
 myprintf("Hello, %s! The value of x is %d and y is %f.\n", "User", 42, 3.14);
 return 0;
}

Supported Format Specifiers
The custom printf function currently supports the following format specifiers:

%s - String
%d - Integer
%c - Character
%f - Float (single-precision)
Examples
Here are some examples of how to use the custom printf function:

#include "myprintf.h"

int main() {
    int num = 42;
    float pi = 3.14159;
    char initial = 'J';
    char name[] = "John Doe";

    myprintf("Integer: %d\n", num);
    myprintf("Float: %f\n", pi);
    myprintf("Character: %c\n", initial);
    myprintf("String: %s\n", name);

    return 0;
}

