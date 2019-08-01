#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * format_selector - function that selects the format to be
 * applied to the input parameters.
 * @format: string that contains the format to be applied by printf.
 * @list: list of arguments
 *
 * Return: numbers of characters printed if successful.
 */
int format_selector(char format, va_list list)
{
	int sum = 0;
	char *string;
	int num = 0;
	char c;

	switch (format)
	{
		case 'c':
		c = va_arg(list, int);
		_putchar (c), sum = 1;
		break;
		case 's':
		string = va_arg(list, char *);
		if (string == NULL)
		{
		_puts("(null)"), sum = 6;
		break;
		}
		_puts(string), sum = _strlen(string);
		break;
	case 'd': case 'i':
		num = va_arg(list, int);
		if (num == 0)
		{
		_putchar('0'), sum = 1;
		break;
		}
		sum = print_num(num);
		break;
		case '%':
		_putchar('%'), sum = 1;
		break;
		default:
		if (format == '\0')
		{
		_putchar('%'), _putchar(format), sum = 2;
		break;
		}
	}
	return (sum);
}
