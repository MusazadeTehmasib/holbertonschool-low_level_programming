#include <stdio.h>

/**
 * main - go
 *
 * Return: betty my betty
 */
int main(void)
{

	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
