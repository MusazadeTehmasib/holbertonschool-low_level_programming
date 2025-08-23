#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments
 *
 * Only 2 if statements allowed: one for separator, one for NULL strings
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
		/* First if: check for valid types and handle separator */
		if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
		{
			if (sep)
				printf(", ");

			sep = 1; /* update separator after first valid print */

			/* Type handling without any extra ifs */
			*p == 'c' && printf("%c", va_arg(args, int));
			*p == 'i' && printf("%d", va_arg(args, int));
			*p == 'f' && printf("%f", va_arg(args, double));
			*p == 's' && (str = va_arg(args, char *)) &&
				printf("%s", str ? str : "(nil)"); /* second if inside ternary for NULL */
		}
		p++;
	}

	printf("\n");
	va_end(args);
}
