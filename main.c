#include "monty.h"

/**
 * * main - monty code interpreter
 *
 * Return: 0 on success
 */
int main()
{
	stack_t* head = NULL;

	/* Example usage of push*/
	push(&head, 1, 1);
	 push(&head, 2, 2);
	 push(&head, 3, 3);

	 /* Example usage of pall*/
	 /*printf("Stack elements:\n");*/
	 pall(head);

	 return 0;
}

