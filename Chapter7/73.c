#include <stdio.h>
#include <ctype.h>

#define STOP 0
int main(){
	printf("Please enter some kind of integers (0 quits):");
	int input;
	int evenInts = 0;
	int oddInts = 0;
	int sum = 0;
	int sumOdd = 0;
	while(scanf("%d", &input) == 1 && input != STOP){	
		if(input % 2 == 0 && input != 0){
			evenInts++;
			sum += input;
		}else{
			oddInts++;
			sumOdd += input;
		}
	}
	printf("Even integers: %d\n"
			 "Average even: %f\n"
			 "Odd integers: %d\n"
			 "Average odd: %f\n", 
				evenInts, sum / (float) evenInts, oddInts, sumOdd / (float) oddInts);
	return 0;
}
