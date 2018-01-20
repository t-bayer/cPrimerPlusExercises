#ifndef STACK_H_
#define STACK_H_ 1

#include <stdbool.h>

typedef struct node{
	char item;
	struct node * previous;
} Node;

typedef Node * Stack;

Stack * InitializeStack(Stack * pstack);

bool PushItem(const char * pch, Stack * pstack);

bool PopItem(char *pch, Stack * pstack);

void EmptyStack(Stack * pstack);

#endif
