#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: char *str String to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		++len;
	}
}


/**
 * print_number - Function that prints an integer
 * @n: int n
 * Return: void
 */
void print_number(int n)
{

	char lD;
	int  r;

	if (n < 0)
	{
		_putchar('-');
		lD = (char)('0' - (n % 10));
		n /= -10;
	}
	else
	{
		lD = (char)((n % 10) + '0');
		n /= 10;
	}
	r = 0;
	while (n > 0)
	{
		r = r * 10 + (n % 10);
		n /= 10;
	}
	while (r > 0)
	{
		char c = (char)((r % 10) + '0');

		_putchar(c);
		r /= 10;
	}
	_putchar(lD);
}

/**
 * _strlen - function that determines the lenght of a string.
 *@s: pointer to a string
 *
 *Return: lenght of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 *_digits - function that determines how many digits
 * has a number.
 *@num: input number
 *
 *Return: Number of digits
 */

int _digits(int num)
{

	int totalDigits = 0;

	while (num != 0)
	{
		num = num / 10;
		totalDigits++;
	}
	return (totalDigits);
}
