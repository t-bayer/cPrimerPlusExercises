#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	if(argc < 2){
		puts("Please provide a character and >0 filenames as arguments");
		exit(EXIT_FAILURE);
	}
	char ch = *(argv[1]);
	char inputCh;
	if(argc == 2){
		int count = 0;
		while((inputCh = getchar()) != EOF){
			if(ch == inputCh){
				count++;
			}
		}
		printf("Character count for %c in ...\n", ch);
		printf("Standard in: %d\n", count);
	}else{
		int counts[argc - 2];		
		for(int i = 2; i< argc; i++){
			counts[i-2] = 0;			
			FILE * fp;			
			if((fp = fopen(argv[i], "r")) == NULL){
				fprintf(stderr, "Can't open file");
				continue;
			}
			while((inputCh = getc(fp)) != EOF){
				if(ch == inputCh){
					counts[i-2]++;
				}
			}
			fclose(fp);
		}
		printf("Character count for %c in ...\n", ch);
		for (int i = 2; i < argc; i++)
			printf("%s: \t\t%d\n", argv[i], counts[i-2]);
		}
	return 0;
}

