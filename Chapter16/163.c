#include <stdio.h>
#include <math.h>

struct polar{
	double angle;
	double magnitude;
};

struct rectangular{
	double x;
	double y;
};

struct rectangular polarToRectangular(struct polar * polar);

int main(void){
	struct polar polar;
	puts("Please enter an angle:");	
	while(scanf("%lf", &polar.angle) != 1){
		while (getchar() != '\n') continue;
		puts("Please enter an angle:");			
	}
	puts("Please enter a magnitude:");
	while(scanf("%lf", &polar.magnitude) != 1){
		while (getchar() != '\n') continue;
		puts("Please enter a magnitude:");			
	}
	struct rectangular rect = polarToRectangular(&polar);
	printf("Angle: %f  Magnitude: %f\n", polar.angle, polar.magnitude);
	printf("x: %f  y: %f\n", rect.x, rect.y);

}

struct rectangular polarToRectangular(struct polar * polar){
	struct rectangular rect;
	rect.x = polar->magnitude * cos(polar->angle);
	rect.y = polar->magnitude * sin(polar->angle);
	return rect;
}
