#include "function_pointers.h"
#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (*array != NULL && size != NULL)
		action(*array, size);
}
