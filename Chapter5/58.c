#include <stdio.h>

int main(void){
	printf("This program computes moduli\n");
	printf("Enter a integer to serve as the second operand: ");
	int second = 1;				
	scanf("%d",&second);				
	int first = 1;	
	while(first > 0){	
		printf("Now enter the first operand: ");
		scanf("%d",&first);
		printf("%d %% %d is %d\n", first, second, first % second);	
	}
	printf("Done\n");
	return 0;
}

