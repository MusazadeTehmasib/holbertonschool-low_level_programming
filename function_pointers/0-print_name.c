#include <stdio.h>
#include <ctype.h>

void print_name(char *name, void (*f)(char *)){
	int i = 0;
	
	if (name != NULL && f != NULL)
		f("%s\n", name);
	
	
	void print_uppercase(char *name){
		printf("Hello, my name is ");
		for (i = 0; name[i] != '\0'; i++){
			putchar(toupper(name[i]));
		}
	}
}
