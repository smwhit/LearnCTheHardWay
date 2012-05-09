#include <stdio.h>

void print_backwards(char *names[], int *ages, int size);



int main(int argc, char *argv[]) 
{
	int ages[] = {23, 43, 12, 89, 2};
	
	char *names[] = { "Alan", "Franks",
					  "Mary", "John", "Lisa"
					};
										
	int count = sizeof(ages) / sizeof(int);
	
	print_backwards(names, ages, count);
	int i = 0;
	
	//first way using indexing
	for(i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", 
					names[i], ages[i]);
	}
	
	int *my_age_ptr = ages;
	char **my_names_ptr = names;
	
	printf("---\n");
	
	// my way with pointers
	for(i = 0; i < count; i++) {
		printf("my way with pointers %s %d.\n",
			*(my_names_ptr+i), *(my_age_ptr+i));
	}
	
	printf("---\n");
	
	// backwards iteration
	for(i = count-1; i>=0; i--) {
		printf("backwards %s has %d years alive.\n", 
					names[i], ages[i]);
	}
	
	printf("---\n");
	
	// setup the pointers to the start of the arrays
	int *cur_age = ages;
	//int *cur_age = names;
	char **cur_name = names;
	
	// second way using pointers
	for (i = 0; i < count; i++) {
		printf("%s is %d years old.\n", 
				*(cur_name+i), *(cur_age+1));
	}
	
	printf("---\n");
	
	// backwards using pointers
	
	for(i = count-1; i >=0; i--) {
		printf("backwards %s is %d years old.\n",
			*(cur_name+i), *(cur_age+i));
	}
	
	printf("---\n");
	
	// third way, pointers are just arrays
	for( i = 0; i < count; i++) {
		printf("%s is %d years old again.\n",
				cur_name[i], cur_age[i]);
	}
	
	printf("---\n");
	
	// backwards pointers are just arrays
	
	for(i=count-1; i>=0; i--) {
		printf("backwards %s is %d years old again.\n",
			cur_name[i], cur_age[i]);
	}
	
	printf("---\n");
	
	//fourth way with pointers in a stupid complex way
	for(cur_name = names, cur_age = ages; 
		(cur_age - ages) < count;
		 cur_name++, cur_age++)
		{
			//printf("cur_age = %d", cur_age);
			//printf("ages = %d", ages);
			printf("%s lived %d years so far.\n", 
				*cur_name, *cur_age);
		}
		
	printf("---\n");
		
	char **arguments = argv;
		
	for(i = 0 ; i < argc; i++) {
		printf("command line argument - %s\n", *(arguments+i));
		printf("argument address - %p\n", &arguments[i]);
	}
			
	int *val = &ages[0];
	printf("%d\n", *val);
	printf("%d\n", *(val+1));
	
	char **arg = &arguments[0];
	printf("%s\n", *(arg));
	printf("%s\n", *(arg+1));
	
	return 0;
}

void print_backwards(char *names[], int *ages, int size) 
{	
	int i = 0;
	
	//first way using indexing
	for(i = 0; i < size; i++) {
		printf("in a function %s has %d years alive.\n", 
					names[i], ages[i]);
	}
	
	printf("---\n");
}
