#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
