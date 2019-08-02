# _printf()

The _printf() function is a custom implementation of the C programming function printf. It returns the number of characters printed and writes the output to stdout. It includes the conversion specifiers : c, s, %, d, and i. This is our first Holberton School group project (Daniel Castaño, Rolando Quiroz) in the Low Level Programming track.

## Function prototype



```bash
int _printf(const char *format, ...);
```

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
- _printf.c
- _putchar.c
- format_selector.c
- funcs.c
- holberton.h
- man_3_printf
- print_num.c

## Autors

Daniel Castaño email: 951@holbertonschool.com

Rolando Quiroz email: 906@holbertonschool.com



## License
[MIT](https://choosealicense.com/licenses/mit/)