#include <stdio.h>

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bugs_rate = 1.2;
	
	printf("You have %d bugs at the imaginary rate of %f.\n", 
		bugs, bugs_rate);
		
	unsigned long universe_of_defects = 2L * 1024L * 1024L * 1024L ;
	printf("The entire universe has long int %ld bugs.\n", universe_of_defects);
	printf("The entire universe has int %d bugs.\n", universe_of_defects);
	printf("The entire universe has float %f bugs.\n", universe_of_defects);
	
	double expected_bugs = bugs * bugs_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);
	
	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);
	
	// this makes no sense, just a demo of something weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n", care_percentage);
	printf("nul_byte->%c<-\n", nul_byte);
	printf("nul_byte->%s<-\n", nul_byte);
	return 0;
}