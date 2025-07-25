#include <stdio.h>

/**
 * main - nums print 1-9
 *
 * Return: always0 baby
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
