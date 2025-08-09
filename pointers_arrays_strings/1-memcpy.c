#include "main.h"

/**
 * _memcpy - cpy
 * @dest: destination
 * @src: source
 * @n: b
 *
 * Return: ret
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
