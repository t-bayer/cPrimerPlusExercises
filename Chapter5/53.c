#include <stdio.h>

int main(){
	const int DAYS_PER_WEEK = 7;
	int days;
	while(days > 0){		
		printf("Please enter a amount of days: ");
		scanf("%d", &days);		
		printf("%d days are %d weeks, %d days\n", days, days / DAYS_PER_WEEK, days % DAYS_PER_WEEK);
	}
	return 0;
}
