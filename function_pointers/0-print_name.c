#include <stdio.h>
#include <ctype.h>

void print_name(char *name, void (*f)(char *)){
		
	if (name != NULL && f != NULL)
		printf("%s\n", name);

}

void print_name_uppercase(char *name){
	int i = 0;

	printf("Hello, my name is ");
		for (i = 0; name[i] != '\0'; i++){
			putchar(toupper(name[i]));
	}
}
