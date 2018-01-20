#ifndef FILM_H_
#define FILM_H_ 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define TSIZE 45

typedef struct film 
{
	char title[TSIZE];
	int rating;
	struct film * next;
} Film;

typedef Film * List;

void delete_list(List * list);
void add_film(List filmlist, Film * item);
void list_films(List filmlist);
void reverse_list_films(List filmlist);
#endif
