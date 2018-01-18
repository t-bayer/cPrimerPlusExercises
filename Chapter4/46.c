#include <stdio.h>
#include <string.h>

int main(){
	printf("Please enter your first and last name: ");
	char first[40];
	char last[40];
	scanf("%s %s", first, last);
	printf("%s %s\n", first, last);
	printf("%*lu %*lu\n", 
		(int) strlen(first), strlen(first),
		(int) strlen(last), strlen(last));
	printf("%s %s\n", first, last);		
	printf("%-*lu %-*lu\n", 
		(int) strlen(last), strlen(first),
		(int) strlen(last), strlen(last));
	return 0;
}
