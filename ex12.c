#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	int real_args = argc - 1;
	
	if(real_args == 1) {
		printf("You only have one argument.\n");
	} else if(real_args > 1 && real_args < 4) {
		printf("Here are your arguments:\n");
		
		for(i = 1 ; i <= real_args ; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You suck.\n");
	}

	return 0;
}