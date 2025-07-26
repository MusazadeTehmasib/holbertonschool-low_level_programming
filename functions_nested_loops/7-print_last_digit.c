#include "main.h"

/**
 * print_last_digit - obv name
 * @n: the victim
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int ld = n % 10;
	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');

	return (ld);
}
