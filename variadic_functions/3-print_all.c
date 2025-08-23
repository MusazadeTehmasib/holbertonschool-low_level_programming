#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int sep = 0;
	char *str;
	char current;

	va_start(args, format);
	
	while (format && format[i])
	{
		current = format[i];
		
		if ((current == 'c') + (current == 'i') + (current == 'f') + (current == 's'))
		{
			if (sep)
				printf(", ");
			
			(current == 'c') && printf("%c", va_arg(args, int));
			(current == 'i') && printf("%d", va_arg(args, int));
			(current == 'f') && printf("%f", va_arg(args, double));
			(current == 's') && ((str = va_arg(args, char *)), printf("%s", str ? str : "(nil)"));
			
			sep = 1;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
