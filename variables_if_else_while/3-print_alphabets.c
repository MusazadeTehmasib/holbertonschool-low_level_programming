#include <stdio.h>

/**
 * main - bruh
 *
 * Return: bruh
 */
int main(void)
{
    char lower = 'a';
    char upper = 'A';

    while (lower <= 'z')
    {
        putchar(lower++);
    }

    while (upper <= 'Z')
    {
        putchar(upper++);
    }

    putchar('\n');

    return (0);
}
