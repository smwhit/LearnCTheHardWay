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
			// if(letter < 97)
			// {
				// letter = letter + 32;
			// }
			
			switch(letter) {
				case 'a':				
					printf("%d: 'A'\n", i);				
					break;
				
				case 'e':				
					printf("%d: 'E'\n", i);
					break;
					
				case 'i':				
					printf("%d: 'I'\n", i);
					break;
					
				case 'o':				
					printf("%d: 'O'\n", i);
					break;
				
				case 'u':				
					printf("%d: 'U'\n", i);
					break;
					
				case 'y':				
					if(i>2) {
						printf("%d: 'Y'\n", i);
						break;
					}
					// break;
					
				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
	}

	return 0;
}