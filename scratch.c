#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_DATA 10000000000

 struct Second {
	 char name[100];
 };

struct First {
	char name2[100];
};

void die(const char *message)
{
	if(errno) {
		perror(message);
	} else {
		printf("ERROR: %s\n", message);
	}
	exit(1);
}


int main(int argc, char *argv[]) {
		
	char *name1 = "Simon";
	char *name2 = "Simon";
	
	printf("%s == %s = %d\n", name1, name2, name1==name2);
	
	struct First first = { .name2 = "Simon" };
	struct Second second = { .name = "Steve!" };
	
	printf("%s\n", second.name);
	printf("%s\n", first.name2);
	
	FILE *file = fopen("data.txt", "w");
	if(!file) die("Problem Opening file");
	
	void *first_ptr = &first;
	void *second_ptr = &second;
	
	int rc = fwrite(first_ptr, sizeof(struct First), 1, file);
	if(rc != 1) die("Failed to write file");
		
	rc = fwrite(second_ptr, sizeof(struct Second), 1, file);
	if(rc != 1) die("Failed to write file");
	
	rc = fflush(file);
	if(rc == -1) die("Could not flush file");
	fclose(file);
	
	file = fopen("data.txt", "r+");
	
	struct First *retrievedFirst = malloc(sizeof(struct First));
	struct Second *retrievedSecond = malloc(sizeof(struct Second));
	
	rc = fread(retrievedFirst, sizeof(struct First), 1, file);
	rc = fread(retrievedSecond, sizeof(struct Second), 1, file);
	
	printf("ok? %s\n", retrievedFirst->name2);
	printf("ok? %s\n", retrievedSecond->name);
	
	free(retrievedFirst);
	free(retrievedSecond);
	fclose(file);
	
	return 0;
}