#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int format_selector(char format, va_list list);
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
void print_number(int n);
int _strlen(char *s);
int _digits(int num);
int print_num(int num);
#endif
