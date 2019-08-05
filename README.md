# _printf()

The _printf() function is a custom implementation of the C programming function printf. It returns the number of characters printed and writes the output to stdout. It includes the conversion specifiers : c, s, %, d, and i. This is our first Holberton School group project (Daniel Castaño, Rolando Quiroz) in the Low Level Programming track.

## Function prototype



```bash
int _printf(const char *format, ...);
```

## Implemented format specifiers


| Specifier type | Description |
| :-:   | :-: |
| c | Single character |
| s  | String of characters |
| d or i | Signed decimal integer |

## Implemented Flags

| Flag | Description |
| :-:   | :-: |
| # | Use with o, x, or X specifiers, the value is preceded with 0, 0x, or 0X respectively for nonzero value |

## Usage

You must include in your function the "holberton.h" header:

```bash
#include "holberton.h"
```

The directory contents should be compiled with the following command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
The you can use our _printf() function like this:

```bash
_printf("There are %s in %d lines of %c code !.", "passion", 1000, 'C');
```
And you will get this output:

```bash
There are passion in 1000 lines of C code !.
```

## Files and functions
- _File: printf.c

   o _printf - function that prints, has several functions of the printf function in c.

- File: _putchar.c

   o _putchar - writes the character c to stdout

- File: format_selector.c

   o format_selector - function that selects the format to be applied to the input parameters.

- File: funcs.c

   o _puts - prints a string, followed by a new line, to stdout

   o print_number - Function that prints an integer
   
   o _strlen - function that determines the lenght of a string.
  
   o _digits - function that determines how many digits

- File: holberton.h

   o 
- File: man_3_printf

   o
- File: print_num.c

   o print_num - Function that prints any number

## Autors

Daniel Castaño email: 951@holbertonschool.com 

Rolando Quiroz email: 906@holbertonschool.com



## License
[MIT](https://choosealicense.com/licenses/mit/)
