#include <stdio.h>

int main(int argc, char *argv[])
{

	char name[4] = {'a', 'a', 'a', 'a'};
	int numbers[4] = {0};	
	//char name[4] ;	
	
	printf("numbers %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each %c %c %c %c\n", name[0], name[1], name[2], name[3]);	
	printf("name: %s\n", name);
	
	// numbers[0] = 1;
	// numbers[1] = 2;
	// numbers[2] = 3;
	// numbers[3] = 4;
	numbers[0] = 'A';
	numbers[1] = 'B';
	numbers[2] = 'C';
	numbers[3] = 'D';
	
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	
	printf("numbers %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);
	
	char *another = "Zed";
	printf("another: %s\n", another);
	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
	printf("numbers as string: %s\n", numbers);
	printf("mubers as string take2: %c%c%c%c\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	char *name_2 = "Zed\0";
	printf("name_2 - %s", name_2);
	
	return 0;
}