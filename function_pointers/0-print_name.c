#include <stdio.h>

void print_name(char *name, void (*f)(char *)){
	if (name != NULL && f != NULL)
		printf("%s\n", name);
	
	int i = 0;
	if (name != NULL && f == NULL){
		while (name[i]){
			putchar(toupper(name[i]));
			int++;	
		}
	}
}
