#include <stdio.h>

#define LEN 20
#define CSIZE 4
#define GRADEL 3

struct name{
	char firstName[LEN];
	char secondName[LEN];
};

struct student{
	struct name name;
	float grade[GRADEL];
	float avg;
};


void getgrades(struct student * student);
void calcAvg(struct student * student);
void showstudentinfo(struct student * student);

int main(void){
	struct student students[CSIZE] = {
		{.name = {"Peter","Peterson"}},
		{.name = {"Michael","Mayer"}},
		{.name = {"Tobias","Tobison"}},
		{.name = {"Bob","Blue"}}, 
	};	

	for (int i = 0; i < CSIZE; i++)
		getgrades(&students[i]);

	for (int i = 0; i < CSIZE; i++)
		calcAvg(&students[i]);

	for (int i = 0; i < CSIZE; i++)
		showstudentinfo(&students[i]);
}

void getgrades(struct student * student){
	for(int i = 0; i < GRADEL; i++){
		printf("Please enter grade %d for student %s %s:", i+1, 
			student->name.firstName, student->name.secondName);
		while(scanf("%f", student->grade+i) != 1){
			while (getchar() != '\n') continue;
		}
		while (getchar() != '\n') continue;
	}
}

void calcAvg(struct student * student){
	float total = 0;	
	for(int i = 0; i < GRADEL; i++){
		total += student->grade[i];
	}
	student->avg = total / GRADEL;
}

void showstudentinfo(struct student * student){
	printf("Name: %s %s\n", student->name.firstName, student->name.secondName);
	printf("Grade 1: %.1f\n", student->grade[0]);
	printf("Grade 2: %.1f\n", student->grade[1]);
	printf("Grade 3: %.1f\n", student->grade[2]);
	printf("Average Grade: %.1f\n", student->avg);
	puts("");
}
