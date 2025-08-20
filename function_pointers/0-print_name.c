#include <stdio.h>

void print_name(char *name, void (*f)(char *)){
	printf("%s", name);
}
