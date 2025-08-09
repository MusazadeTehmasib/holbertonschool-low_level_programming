#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes bettyyy
 * @s: string to search in
 * @accept: aaaa
 * Return: return right answerrr bettyyyy
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
