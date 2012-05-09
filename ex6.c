#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";
	
	printf("You are %x.0000 hex miles away.\n", distance);	
	printf("You are %o.0000 oct miles away.\n", distance);	
	printf("You are %u.0000 unsigned miles away.\n", distance);	
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);		
	printf("You have %e awesome super powers.\n", super_power);		
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c %s", first_name, initial, last_name);
	printf("An empty string -->%s<--", " ");
	return 0;
}