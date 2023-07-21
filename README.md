
# Printf Project

## Overview

This project is an implementation of the `printf` function in C programming language. The `printf` function is used to print formatted output to the standard output stream. The goal of this project is to create a custom version of `printf` with support for a subset of format specifiers and options.

## Table of Contents

- [Installation](#installation)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Installation

To use the custom `printf` function, follow these steps:

1. Clone the repository to your local machine:

    git clone https://github.com/nouhelion/Printf.git

3. Navigate to the project directory:

    cd Printf

5. Compile the source code:

    gcc -o myprintf myprintf.c main.c

7. Run the executable:

   ./myprintf

## Project Structure 

```
Printf/
├── src/
│   ├── myprintf.c
│   └── main.c
├── include/
│   └── main.h
└── README.md
```

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
```

## Examples
Here are some examples of how to use the custom printf function:

```c
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
```

Output :

```
Integer: 42
Float: 3.141590
Character: J
String: John Doe
```

## Contributing
If you want to contribute to this project, please follow these steps:

Fork the repository
Create a new branch
Make your changes and commit them
Push your changes to your fork
Submit a pull request to the original repository
Please ensure your code follows the project's coding standards and conventions.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
