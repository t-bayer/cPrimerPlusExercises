#include "film.h"

void delete_list(List * list_ptr){
	Film * tmp, * list = *list_ptr;
	while (list != NULL){
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*list_ptr = NULL;
}

void add_film(List filmlist, Film * new_film){
	Film * film_ptr = filmlist;
	while (film_ptr->next != NULL)
		film_ptr = film_ptr->next;
	film_ptr->next = new_film;
}

void list_films(List film_ptr){
	while (film_ptr != NULL){
		printf("%s: %d\n", film_ptr->title, film_ptr->rating);
		film_ptr = film_ptr->next;
	}
}

void reverse_list_films(List film_ptr){
	if (film_ptr == NULL)
		return;
	else{
		reverse_list_films(film_ptr->next);
		printf("%s: %d\n", film_ptr->title, film_ptr->rating);
	}
}
