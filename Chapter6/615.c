#include <stdio.h>

int main(void){
	char line[255];
	int i = 0;
	printf("Enter a line to reverse:\n");
	while (scanf("%c", &line[i]), line[i] != '\n')
		i++;
	for (; 0 <= i; i--)
		printf("%c", line[i]);
	printf("\n");
	return 0;
}
