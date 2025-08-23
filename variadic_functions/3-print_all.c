#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments
 *
 * c: char
 * i: integer
 * f: float
 * s: string (print (nil) if NULL)
 */


void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, sep = 0;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		if (sep)
			printf(", ");
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			sep = 1;
		}
		if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
			sep = 1;
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
			sep = 1;
		}
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			sep = 1;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
