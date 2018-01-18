#include <stdio.h>

int main(void){
	int count, sum;
	count = 0;
	sum = 0;
	printf("Please enter a number to indicate how far to process: ");
	int number;
	scanf("%d",&number);	
	while (count++ < number)
		sum = sum + count * count;
	printf("sum = %d\n", sum);
	return 0;
}
