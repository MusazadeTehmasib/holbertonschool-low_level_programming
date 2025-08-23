#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function
 * @array: pointer to array
 * @size: number of elements in array
 * @action: pointer to function 
 *
 * Return: Nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
