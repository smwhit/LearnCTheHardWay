#include <stdio.h>
#include <ctype.h>
#include <string.h>

//forward declarations
int can_print_it(unsigned int ch);
void print_letters(char arg[], unsigned int length);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	int str_length = 0;
	
	for (i = 0; i < argc; i++) {
		str_length = strlen(argv[i]);
		//printf("length is %d\n", str_length); 
		print_letters(argv[i], str_length);
	}	
}

void print_letters(char arg[], unsigned int length)
{
	int i = 0;
		
	for(i = 0; i < length; i++) {
		unsigned int ch = arg[i];
		
		//if(can_print_it(ch)) {
		if(isalpha(ch) || isblank(ch)) {		
			printf("'%c' == %d ", ch, ch);
		}
	}
	
	printf("\n");
}

int can_print_it(unsigned int ch)
{
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[]) 
{
	print_arguments(argc, argv);
	return 0;
}