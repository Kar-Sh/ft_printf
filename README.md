# Libftprintf

## Project Description

The **Libftprintf** project involves creating a custom implementation of the standard C library function `printf`. The goal is to develop a function named `ft_printf`, which handles formatted output based on a format string and supports various conversions and flags.

This project aims to help you gain a deeper understanding of variadic functions, formatting, and output handling while adhering to strict coding standards and project requirements.

---

## Features

### Supported Conversions

- `c`: Character
- `s`: String
- `p`: Pointer
- `d` / `i`: Decimal and Integer
- `u`: Unsigned Integer
- `x` / `X`: Hexadecimal (lowercase and uppercase)

### Supported Flags

- `-`: Left-justify the output within the field width.
- `0`: Pad the field with zeros instead of spaces.
- `. `: Precision specifier for numeric and string conversions.
- Minimum field width handling.

---

## Mandatory Requirements

- **Prototype**:  
  `int ft_printf(const char *format, ...);`

- **Prohibited Features**:  
  - Buffer management like the standard `printf`.
  - Use of external tools like `libtool`.

- **Rules**:
  - The output of `ft_printf` will be compared to the standard `printf`.
  - The project must compile without any memory leaks.

---

## Installation and Compilation

### Clone the repository

```bash
git clone <repository_url>
cd libftprintf
```

### Compile the library

```bash
make
```

### Remove object files

```bash
make clean
```

### Remove all generated files

```bash
make fclean
```

### Recompile from scratch

```bash
make re
```

---

## Usage

### Including the library

Include the `libftprintf.a` library and the header file in your project.

```c
#include "ft_printf.h"
```

### Example usage

Use `ft_printf` in your program as follows:

```c
int main(void) {
    ft_printf("Hello, %s! The number is: %d
", "world", 42);
    return 0;
}
```

### Compile  project

Link with `libftprintf.a` while compiling your project:

```bash
gcc main.c -L. -lftprintf -o my_program
```

---


