#include "holberton.h"

/**
 * _printf - function that prints, has several functions
 * of the printf function in c.
 *@format: string with the format to be applied
 *
 *Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list list;
	int pos = 0;
	int printed = 0;

	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				i += 1;
				pos = format_selector(format[i], list);
				printed += pos;
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			printed += 1;
		}
		i++;
	}
	va_end(list);
	return (printed);
}
