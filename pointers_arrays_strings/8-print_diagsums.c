#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - diagnollarin cemini tapir
 * @a: massiv
 * @size: olcusu
 */
void print_diagsums(int *a, int size)
{
	int cem_esas = 0;
	int cem_ikinci = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		cem_esas += a[i * size + i];
		cem_ikinci += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", cem_esas, cem_ikinci);
}
