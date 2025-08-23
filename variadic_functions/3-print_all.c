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

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				sep = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				sep = 1;
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
