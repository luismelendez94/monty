#include "monty.h"

/**
 * _pchar - prints the ascii value of element at top of stack
 *@head: is the pointer to the first node
 *@line: number of the line
 */

void _pchar(stack_t **head, unsigned int line)
{
	int n;

	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		exit(EXIT_FAILURE);
	}

	n = (*head)->n;

	if (n > 127 || n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		exit(EXIT_FAILURE);
	}
	else
		printf("%c\n", n);
}
