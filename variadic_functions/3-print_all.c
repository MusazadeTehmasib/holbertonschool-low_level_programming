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
	char valid;

	va_start(args, format);

	while (format && format[i])
	{
		valid = 1;
		switch (format[i])
		{
			case 'c':
				if (sep)
					printf(", ");
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				if (sep)
					printf(", ");
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				if (sep)
					printf(", ");
				printf("%f", va_arg(args, double));
				break;
			case 's':
				if (sep)
					printf(", ");
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				valid = 0; /* ignore invalid types */
		}
		if (valid)
			sep = 1; /* only update sep for valid types */
		i++;
	}

	printf("\n");
	va_end(args);
}
