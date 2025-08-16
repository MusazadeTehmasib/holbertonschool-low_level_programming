#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: w
 * @height: h
 * Return: Pointer 
 */

int **alloc_grid(int width, int height)
{
	int **mas;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mas = malloc(height * sizeof(*mas));
	if (mas == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mas[i] = malloc(width * sizeof(**mas));
		if (mas[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(mas[i]);
			free(mas);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mas[i][j] = 0;
	}

	return (mas);
}
