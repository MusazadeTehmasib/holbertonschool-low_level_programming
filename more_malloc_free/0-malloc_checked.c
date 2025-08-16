#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using
 * @b: memory size
 *
 * Return: dunno how to describe
 *
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == NULL)
		exit(98);
	return (z);
}
