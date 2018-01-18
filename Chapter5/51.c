#include <stdio.h>

int main(){
	const int MIN_PER_HOUR = 60;
	int time = 1;
	int mins = 1;	
	while(mins != 0){
		printf("Please enter a amount of minutes: ");
		scanf("%d",&mins);
		int hours = mins / MIN_PER_HOUR;
		int remainingMinutes = mins % MIN_PER_HOUR;
		printf("Minutes in Hours and Minutes: %d:%d\n", hours, remainingMinutes);	
	}	
	return 0;
}
