#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#' characters
 *                  followed by a new line.
 * @size: size of the triangle (height and base length)
 *
 * Description: If size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size - row; col++)
			_putchar(' ');

		for (col = 1; col <= row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
