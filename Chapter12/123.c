#include <stdio.h>
#include "123.h"

int main(void){
	int mode = 0;
	double distance, fuel;
	set_mode(&mode);
	while (mode >= 0){
		get_info(mode, &distance, &fuel);
		show_info(mode, distance, fuel);
		set_mode(&mode);
	}
	printf("Done.\n");
	return 0; 
}
