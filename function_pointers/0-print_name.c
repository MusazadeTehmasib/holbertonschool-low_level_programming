#include <stdio.h>

void print_name(char *name, void (*f)(char *)){
	if (name != NULL && f != NULL)
		printf("%s", name);

	for (int i = 0; *name <= '\0', i++){
		printf("&s", *name)
	}
}
