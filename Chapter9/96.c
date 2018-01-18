#include <stdio.h>

void switcher(double * i, double * j, double * k);

int main(){
	printf("Please enter two ints: ");
	double i, j, k;
	while(scanf("%lf %lf %lf", &i, &j, &k) == 3){
		switcher(&i,&j,&k);		
		printf("First: %lf, Second: %lf, Third: %lf\n", i, j, k); 
	}
	return 0;
}

void switcher(double * i, double * j, double * k){
	if(*i > *j){
		double tmp = *j;
		*j = *i;
		*i = tmp;
	}
	if(*j > *k){
		double tmp = *k;
		*k = *j;
		*j = tmp;
	}
	if(*i > *j){
		double tmp = *j;
		*j = *i;
		*i = tmp;
	}
	
}
