#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int sep = 0;
	char *str;
	const char *p;

	va_start(args, format);
	p = format;

	while (p && *p)
	{
		/* Only 1 if for valid types and separator */
		if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
		{
			if (sep)
				printf(", ");

			if (*p == 'c')
				printf("%c", va_arg(args, int));
			if (*p == 'i')
				printf("%d", va_arg(args, int));
			if (*p == 'f')
				printf("%f", va_arg(args, double));
			if (*p == 's')
			{
				str = va_arg(args, char *);
				if (!str) /* second if statement */
					str = "(nil)";
				printf("%s", str);
			}

			sep = 1; /* only for valid types */
		}
		p++;
	}

	printf("\n");
	va_end(args);
}
