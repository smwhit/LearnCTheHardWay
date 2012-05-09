#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if(argc < 2) {
		printf("ERROR: You need one argument.\n");
		return 1;
	}
	
	int i = 0;
	unsigned letter = 0;
	
	int word = 1;
	
	for(word = 1; word < argc; word++) {	
		for(i = 0, letter = argv[word][i]; argv[word][i] != '\0'; i++, letter = argv[word][i]) {		
			
			letter = tolower(letter);			
						
			if(letter == 'a')
				printf("%d: 'A'\n", i);	
			else if (letter == 'e')
				printf("%d: 'E'\n", i);
			else if (letter == 'i')
				printf("%d: 'I'\n", i);
			else if (letter == 'o')
				printf("%d: 'O'\n", i);
			else if (letter == 'u')
				printf("%d: 'U'\n", i);
			else if (letter == 'y')
			{
				if(i > 2) {
					printf("%d: 'Y'\n", i);
				}
			}
			else {				
				printf("%d: %c is not a vowel\n", i, letter);
			}			
		}
	}

	return 0;
}