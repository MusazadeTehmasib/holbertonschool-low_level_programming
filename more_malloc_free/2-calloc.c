#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: numbs
 * @size: sizes
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
