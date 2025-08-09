#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string
 * @accept: accept
 *
 * Return: return right answerrr
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
			break;

		s++;
	}

	return (count);
}
