#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _puts - prints a string using _putchar
 * @s: string
 */
void _puts(char *s)
{
	while (s && *s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 * _print_number - prints an integer using _putchar
 * @n: integer
 */
void _print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		_print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_float - prints a float using _putchar
 * @f: float number
 */
void print_float(double f)
{
	int int_part = (int)f;
	double frac = f - int_part;
	int frac_part;

	if (f < 0 && int_part == 0)
		_putchar('-');

	_print_number(int_part);
	_putchar('.');

	if (frac < 0)
		frac = -frac;

	frac_part = (int)(frac * 1000000); /* 6 decimal places */
	_print_number(frac_part);
}

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, sep = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (sep)
		{
			_putchar(',');
			_putchar(' ');
		}

		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(args, int));
				sep = 1;
				break;
			case 'i':
				_print_number(va_arg(args, int));
				sep = 1;
				break;
			case 'f':
				print_float(va_arg(args, double));
				sep = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				_puts(s);
				sep = 1;
				break;
			default:
				sep = 0;
				break;
		}
		i++;
	}
	_putchar('\n');
	va_end(args);
}
