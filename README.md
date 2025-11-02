# Libft

Libft is a foundational C library developed as part of the curriculum at [42 School](https://www.42.fr/). It aims to reimplement a selection of essential C standard library functions, along with additional utility functions, to strengthen your understanding of low-level programming, memory management, and code organization.

## Table of Contents

- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## About

Libft serves as your personal C library, providing a set of functions for memory operations, string manipulations, linked lists, and more. This project is typically the first step for 42 students to get hands-on experience with C and to master the basics of programming and software design.

## Features

- Memory manipulation (`memset`, `memcpy`, `memmove`, etc.)
- String manipulation (`strlen`, `strcpy`, `strcat`, etc.)
- Character checks (`isalpha`, `isdigit`, `isalnum`, etc.)
- Case conversion (`toupper`, `tolower`)
- Linked list operations (bonus part)
- Other utility functions (`atoi`, `calloc`, `strdup`, etc.)

## Getting Started

### Prerequisites

- GCC or any C compiler
- Make

### Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/<your-username>/libft.git
   cd libft
   ```

2. Compile the library:
   ```sh
   make
   ```

   This will generate a `libft.a` static library file.

## Project Structure

```
libft/
├── ft_*.c         # Source files for each function
├── ft_*.h         # Header files (if any)
├── libft.h        # Main header file with function prototypes
├── Makefile       # Build instructions
└── README.md      # Project documentation
```

## Usage

1. Include `libft.h` in your C files:
   ```c
   #include "libft.h"
   ```

2. Link the compiled library when building your project:
   ```sh
   gcc your_program.c -L. -lft -o your_program
   ```

## Testing

- Use the included tests or create your own.
- You can also use [libft-unit-test](https://github.com/alelievr/libft-unit-test) or similar testers to validate your implementation.

## Contributing

Contributions are welcome! Feel free to fork this repository, submit issues, or propose improvements.

## License

This project is for educational purposes at 42 School. Please consult the school's policy before distributing outside the 42 network.

---

Made with :sparkles: by [Aiman Rochd] for 42 School.
