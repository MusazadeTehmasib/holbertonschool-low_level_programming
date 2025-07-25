#include <stdio.h>
#include <string.h>

/**
 * main - print thing
 *
 * Return: 0 babyboi
 */
int main(void)
{
	char a[] = "_putchar";

	for (int i = 0; i <= strlen(a); i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
