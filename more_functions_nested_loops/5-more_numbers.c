#include "main.h"

/**
 * more_numbers - prints from 0 to 14 10 tm
 * followed by a new line
 */
void more_numbers(void)
{
	char nums[] = "01234567891011121314\n";
	int i;
	int z;

	for (z = 0; z < 10; z++)
	{
		for (i = 0; nums[i] != '\0'; i++)
		{
			_putchar(nums[i]);
		}
	}
}
