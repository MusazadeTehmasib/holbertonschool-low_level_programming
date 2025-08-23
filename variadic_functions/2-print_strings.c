#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings as arguments
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Description: desc
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list task2;

	va_start(task2, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(task2, char*);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(task2);
	printf("\n");
}
