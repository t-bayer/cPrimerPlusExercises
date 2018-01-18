#include <stdio.h>

int main(){
	printf("Please enter a number: ");
	int number;
	int i = 0;
	scanf("%d", &number);
	while(i <= 10){
		printf("%d ", number+i);
		i++;	
	}
	printf("\n");
	return 0;
}
