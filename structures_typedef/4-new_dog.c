#include "dog.h"
#include <stdlib.h>

/**
 * str_len - returns the length of a string
 * @s: input string
 *
 * Return: length of the string
 */
static int str_len(char *s)
{
	int len = 0;

	if (!s)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * str_copy - copies src string into dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
static char *str_copy(char *dest, char *src)
{
	int i;

	if (!dest || !src)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog_t struct and stores copies of name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to newly allocated dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	name_len = str_len(name);
	owner_len = str_len(owner);

	d->name = malloc(name_len + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(owner_len + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	str_copy(d->name, name);
	str_copy(d->owner, owner);
	d->age = age;

	return (d);
}
