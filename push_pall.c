#include "monty.h"

/**
 * create_node - creates a new node for the doubly linked list
 * @data: store in the newly created node.
 *
 * Return: new_node
 */
stack_t *create_node(int data)
{
	stack_t *new_node = (stack_t *)malloc(sizeof(stack_t));

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
 * @data: store in the newly created node.
 * @line_number: identify the specific location in the code where an issue
 *               or an action is taking place.
 *
 * Return: Void
*/
void push(stack_t **head, char *str, unsigned int line_number)
{
	stack_t *new_node;
	int data = atoi(str);

	if (head == NULL)
	{
		fprintf(stderr, "Invalid head pointer\n");
		exit(EXIT_FAILURE);
	}
	if ((data == 0 && str[0] != '0') || (data == INT_MIN && errno == ERANGE))
	{
		fprintf(stderr, "L%u: Value out of integer range\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = create_node(data);

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->next = *head;
	*head = new_node;
}

/**
 * pall - prints the stack
 * @head: stack head
 *
 * Return: void
*/
void pall(stack_t *head)
{
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
