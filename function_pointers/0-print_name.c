#include <stdio.h>
#include <ctype.h>

/**
 * print_name - prints
 * @name: name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *)){
	if (name != NULL && f != NULL)
		f(name);

}
