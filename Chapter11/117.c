#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 50

char * mystrcpy(char *s1, char *s2, int n);
char * get(char *string, int n);

int main(){
	char s1[SIZE];
	char s2[SIZE];
	int n;
	printf("Enter a string to copy: ");
	get(s2, SIZE);
	while (s2[0] != '\0'){
		printf("How many characters do you want to copy? (maximum %d) ", SIZE);
		scanf("%d", &n);
		while (getchar() != '\n')
			continue;
		if (n > SIZE)
			n = SIZE;
		printf("Original string: %s\n", s2);
		mystrcpy(s1, s2, n);
		printf("Copy: %s\n", s1);
		for (int i = 0; i < SIZE; i++)
			s1[i] = '\0';
		printf("Enter a string to copy (empty line to quit): ");
		get(s2, SIZE);
	}

	puts("Bye");

return 0;
}

char * mystrcpy(char *s1, char *s2, int n){
	int i = 0;
	while (s2[i] != '\0' && i < n){
		s1[i] = s2[i];
		i++;
	}

	while (i < n){
		s1[i] = '\0';
		i++;
	}
	return s1;
}

char * get(char *string, int n){
	char *return_value = fgets(string, n, stdin);
	while (*string != '\0')	{
		if (*string == '\n'){
			*string = '\0';
			break;
		}
		string++;
	}
	return return_value;
}
