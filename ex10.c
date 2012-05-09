#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	printf("first argument is %s\n", argv[0]);
	
	for(i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas", NULL
	};

	int num_states = 5;
	int j = 0;
	
	for(i = 0, j = 1; i < num_states; i++, j++)	{
		printf("state %d: %s\n", i, states[i]);
		printf("j is %d\n", j);
	}
	
	argv[0] = states[0];
	
	for(i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	for(i = 0; i < num_states; i++)	{
		printf("state %d: %s\n", i, states[i]);		
	}
	
	states[0] = argv[1];
	for(i = 0; i < num_states; i++)	{
		printf("state %d: %s\n", i, states[i]);		
	}	
	
	return 0;
}