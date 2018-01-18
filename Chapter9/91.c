#include <stdio.h>


double min(double x, double y);

int main(){
	double x = 2.0;
	double y = 3.0;
	double smaller;
	smaller = min(x,y);
	printf("Smaller: %lf\n", smaller);
	return 0;
}


double min(double x, double y){
	return x < y ? x : y;
}
