#include <stdio.h>
#include <ctype.h>

void print_name(char *name, void (*f)(char *)){
	int i = 0;
	
	if (name != NULL && f != NULL)
		printf("%s\n", name);
	
	
	if (name != NULL && f == NULL){
		printf("Hello, my name is ");
		while (name[i]){
			putchar(toupper(name[i]));
			i++;	
		}
	}
}
