#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer. If no numbers found, return 0.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		/* Handle sign changes before any digit is found */
		if (s[i] == '-' && !found_digit)
			sign *= -1;
		else if (s[i] == '+' && !found_digit)
			; /* Do nothing for + */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			/* Stop parsing once digits are finished */
			break;
		}
		i++;
	}

	return (result * sign);
}
