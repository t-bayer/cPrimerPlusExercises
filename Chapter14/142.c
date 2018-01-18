#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LEN 20
#define MONTH 12

void get(char * string, int n);
int findMonth(char * input);
bool checkForLeapYear(int year);
bool validateDay(int month, int days);
int countDays(int month, int day);

struct month{
	char name[LEN];
	char abrev[4];
	char monthno[3];
	int days;
};

struct month months[MONTH] = {
	{"January", "JAN", "01", 31},
	{"February", "FEB", "02", 28},
	{"March", "MAR", "03", 31},
	{"April", "APR", "04", 30},
	{"May", "MAY", "05", 31},
	{"June", "JUN", "06", 30},
	{"July", "JUL", "07", 31},
	{"August", "AUG", "08", 31},
	{"September", "SEP", "09", 30},
	{"October", "OCT", "10", 31},
	{"November", "NOV", "11", 30},
	{"December", "DEC", "12", 31}
};

int main(void){
	puts("Please enter a year:");
	int year;
	while(scanf("%d", &year) != 1){
		while(getchar() != '\n'){
			continue;
		} 
		puts("Please enter a year:");
	}
	while (getchar() != '\n') continue;
	if(checkForLeapYear(year)){
		months[1].days = 29;
	}else{
		months[1].days = 28;
	}
	
	char monthInput[LEN];
	puts("Please enter a month by name, abbreviation or month name:");
	get(monthInput, LEN);
	
	int month = findMonth(monthInput);
	puts("Please enter a day:");
	int day;
	while(scanf("%d", &day) != 1){
		while(getchar() != '\n'){
			continue;
		} 
		puts("Please enter a day:");
	} 
	if(!validateDay(month, day)){
		puts("Invalid days");
		exit(EXIT_FAILURE);
	}
	int totalDays = countDays(month, day);
	printf("There are %d days in %d until %s %d\n", totalDays, year, months[month].name, day);
	
}

int countDays(int month, int day){
	int total = 0;
	for(int i = 0; i < month; i++){
		total += months[i].days;
	}
	total += day;
	return total;
}


bool validateDay(int month, int days){
	if(days > months[month].days){
		return false;
	}else{
		return true;
	}
}

int findMonth(char * input){
	int i;	
	for(i=0; i < MONTH; i++){
		if(strcmp(input, months[i].name) == 0 || 
			strcmp(input, months[i].abrev) == 0 || 
			strcmp(input, months[i].monthno) == 0){
				break;
		}
	}
	if(i == MONTH){
		puts("No month found");
		exit(EXIT_FAILURE);
	}
}

bool checkForLeapYear(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		return true;
	}else{
		return false;
	}
}

void get(char * string, int n){
	fgets(string, n, stdin);
	while (*string != '\0'){
		if (*string == '\n'){
			*string = '\0';
			break;
		}
		string++;
	}
}

