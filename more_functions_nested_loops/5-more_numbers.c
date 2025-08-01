#include "main.h"

/**
 * most_numbers - prints the numbers from 0 to 9 except 2 and 4
 * followed by a new line
 */
void most_numbers(void)
{
	char nums[] = "01234567891011121314\n";
	int i;
	int z;

	for (z = 0; z <= 4; z++)
		for (i = 0; nums[i] != '\0'; i++)
			_putchar(nums[i]);
		_putchar('\n');
}
