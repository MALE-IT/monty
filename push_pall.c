#include "monty.h"

/**
 * create_node - creates a new node for the doubly linked list 
 * @data: store in the newly created node.
 *
 * return: new_node
 */
stack_t* create_node(int data)
{
	stack_t* new_node = (stack_t*)malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation error\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * push - add node to the stack
 * @head: stack head
 * @line_number: identify the specific location in the code where an issue
 * 		or an action is taking place.
 * @data: store in the newly created node.
 *
 * Return: Void
*/
void push(stack_t** head, int data, unsigned int line_number)
{
	if (head == NULL)
	{
		fprintf(stderr, "Invalid head pointer\n");
		exit(EXIT_FAILURE);
	}
	if (data < INT_MIN || data > INT_MAX)
	{
		fprintf(stderr, "L%u: Value out of integer range\n", line_number);
		exit(EXIT_FAILURE);
	}

}

/**
 * pall - prints the stack
 * @head: stack head
 * 
 * Return: void
*/
void pall(stack_t* head)
{
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}

