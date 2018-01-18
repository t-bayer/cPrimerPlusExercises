#include <stdio.h>

#define NAMEL 20
#define LEN 5

struct Name{
	char firstName[NAMEL];
	char middleName[NAMEL];
	char lastName[NAMEL];
};

struct Person{
	int ssn;
	struct Name name; 	
};

void printPerson(struct Person person);
void printPersonB(struct Person * person);

int main(void){
	struct Person people[LEN] = {
		{123, {"Peter", "Pete", "Peterson"}},
		{456, {"Michael", "Mike", "Maier"}},
		{789, {"Hans", "Hansi", "Hanson"}},
		{123, {"Tobias", "Tube", "Tobson"}},
		{456, {"Dribble", "Mute", "Flossie"}}
	};
	for(int i = 0; i < LEN; i++){
		printPerson(people[i]);
	}

	for(int i = 0; i < LEN; i++){
		printPersonB(&people[i]);
	}
}

void printPerson(struct Person person){
	printf("%s, %s %c. - %d\n", 
		person.name.lastName, person.name.firstName, person.name.middleName[0], person.ssn); 
}

void printPersonB(struct Person *person){
	printf("%s, %s ",	person->name.lastName, person->name.firstName);
	if(person->name.middleName[0] != '\0'){
		printf("%c. ", person->name.middleName[0]);
	} 
	printf("---%d\n", person->ssn);
}
