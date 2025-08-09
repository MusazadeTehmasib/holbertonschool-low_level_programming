#include "main.h"

/**
 * _memset - bruh
 * @s: s
 * @b: byte
 * @n: numberr
 *
 * Return: return answer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
