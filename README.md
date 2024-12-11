# libftprintf

## Description

The `libftprintf` project involves creating a custom library that contains the `ft_printf` function, mimicking the behavior of the standard `printf` function in the C library (`libc`). This implementation re-creates `printf` without using its buffer management and handles various format specifiers, flags, and conversions.

## Features

- **Prototype**: `int ft_printf(const char *, ...);`
- **Conversions Supported**: 
  - `c` (character)
  - `s` (string)
  - `p` (pointer)
  - `d`, `i` (signed integer)
  - `u` (unsigned integer)
  - `x`, `X` (hexadecimal)
  - `%` (literal percent symbol)
- **Flags Supported**:
  - `-` (left alignment)
  - `0` (padding with zeros)
  - `.*` (precision and width)
  - Minimum field width for all conversions

## Requirements

- **External Functions Used**:
  - `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
  
- **Makefile**:
  - Must include at least the following rules: `$(NAME)`, `all`, `clean`, `fclean`, `re`
  - Must use the following compiler flags: `-Wall`, `-Wextra`, `-Werror`
  - The Makefile should not relink files unnecessarily.
  - Must compile the library using the `ar` command (using `libtool` is forbidden).

## Usage

### Compilation

To compile the program, run the following command:

```bash
make
