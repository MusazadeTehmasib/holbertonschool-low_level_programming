#include "main.h"
#include <stdlib.h>

/**
 * my_length - len
 * @s: string
 *
 * Return: my lentth
 */

unsigned int my_length(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - Creates dupe
 * @str: srt
 *
 * Return: Pointer or null
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = my_length(str) + 1;

	cpy = malloc(len * sizeof(char));
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	return (cpy);
}
