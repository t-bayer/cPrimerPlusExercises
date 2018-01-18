#include <stdio.h>

void larger_of(double * i, double * j);

int main(){
	printf("Please enter two ints: ");
	double i, j;
	while(scanf("%lf %lf", &i, &j) == 2){
		larger_of(&i,&j);		
		printf("First: %lf, Second: %lf\n", i, j); 
	}
	return 0;
}

void larger_of(double * i, double * j){
	double larger = *i > *j ? *i : *j;
	*i = larger;
	*j = larger;
}
