#include <stdio.h>

/**
 * main - woke
 *
 * Return: woke
 */
int main(void)
{
    char lower = 'a';
    char upper = 'A';

    /* Print lowercase alphabet */
    while (lower <= 'z')
    {
        putchar(lower++);
    }

    /* Print uppercase alphabet */
    while (upper <= 'Z')
    {
        putchar(upper++);
    }

    /* Print a newline */
    putchar('\n');

    return (0);
}
