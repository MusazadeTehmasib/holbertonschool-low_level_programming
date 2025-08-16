#include "main.h"
#include <stdlib.h>

/**
 * my_len - length of a string
 * @s: tring
 *
 * Return: Length of the string
 */
unsigned int my_len(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * str_concat - Combine
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointe
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = my_len(s1);
	len2 = my_len(s2);

	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len2; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';
	return (new_str);
} 
