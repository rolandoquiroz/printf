#include "holberton.h"

/**
 * print_num - Function that prints any number
 * @num: number to be printed
 *
 * Return: Number of digits printed.
 */

int print_num(int num)
{
int counter = 0;
unsigned int buffer = 0;
int minus = 0;

if (num < 0)
{
_putchar('-');
buffer = -num;
minus = 1;
}
else
buffer = num;

if (buffer / 10)
{
print_num(buffer / 10);
}
_putchar(buffer % 10 + '0');

while (buffer / 10 > 0)
{
buffer = buffer / 10;
counter += 1;
}
return (counter + 1 + minus);
}
