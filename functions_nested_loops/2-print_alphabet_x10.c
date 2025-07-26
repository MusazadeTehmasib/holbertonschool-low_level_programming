#include "main.h"

/**
 * print_alphabet_x10 - alhpabeta
 *
 * Return: endelss void
 */
void print_alphabet(void)
{
	char c;
	int rep = 0;

	while (rep < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		rep ++;
		_putchar('\n');
	}
}
