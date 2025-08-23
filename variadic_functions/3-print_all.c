#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, sep = 0;
	char *str;
	const char *p;

	va_start(args, format);
	p = format;

	while (p && *p)
	{
		/* Only one if for valid separator */
		if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
		{
			if (sep)
				printf(", ");

			/* Print value based on type */
			(*p == 'c') && printf("%c", va_arg(args, int));
			(*p == 'i') && printf("%d", va_arg(args, int));
			(*p == 'f') && printf("%f", va_arg(args, double));
			(*p == 's') &&
				(str = va_arg(args, char *)) &&
				printf("%s", str ? str : "(nil)");

			sep = 1;
		}
		p++;
	}

	printf("\n");
	va_end(args);
}
