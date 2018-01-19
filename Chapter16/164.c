#include <stdio.h>
#include <time.h>

void delay(double time);

int main(void){
	double time = 5;
	printf("Starting program with %lf seconds\n", time);
	delay(time);
	printf("Program finished\n");  
}

void delay(double time){
	clock_t start, end;
	start = clock();
	while(((end = clock() - start) / CLOCKS_PER_SEC) < time)
		continue;
	return;
}
