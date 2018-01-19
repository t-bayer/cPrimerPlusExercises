#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 5
#define SIZE 30

struct name {
	char firstName[SIZE];
	char lastName[SIZE];
};

int compareContent(const void * p1, const void * p2);
void showNames(struct name * name, int size);

int main(void){
	struct name names[NUM] = {
		{"Toni", "Hawk"},
		{"Peter", "Snow"},		
		{"Peter", "Peterson"},
		{"Michael", "Mayer"},
		{"Tobias", "Tobison"}
	};
	puts("The original list of names:");
	showNames(names, NUM);
	qsort(names, NUM, sizeof(struct name), compareContent);
	puts("Sorted list of names:");
	showNames(names, NUM);
}

int compareContent(const void * p1, const void * p2){
	struct name * first = (struct name *) p1;
	struct name * second = (struct name *) p2;
	int val = strcmp(first->lastName, second->lastName);
	if(val != 0){
		return val;
	}else{
		return strcmp(first->firstName, second->firstName);
	}
}

void showNames(struct name * name, int size){
	for(int i = 0; i < size; i++){
		printf("%s %s\n", name[i].firstName, name[i].lastName);
	}
}
