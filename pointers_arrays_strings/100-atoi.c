#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int digit_started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !digit_started)
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (result < (-(2147483647) - 1 + digit) / 10)
				break;

			result = result * 10 - digit;
			digit_started = 1;
		}
		else if (digit_started)
			break;
		i++;
	}

	if (sign == 1 && result != 0)
		result = -result;

	return result;
}
