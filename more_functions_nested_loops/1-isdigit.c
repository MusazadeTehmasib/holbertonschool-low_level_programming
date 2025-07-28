#include "main.h"

/**
 * _isdigit - obv
 * @c: the victim
 *
 * Return: if digit or not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
