#include "monty.h"

/**
 * _pchar - prints the ascii value of element at top of stack
 *@head: is the pointer to the first node
 *@line: number of the line
 */

void _pchar(stack_t **head, unsigned int line)
{
	int n = (*head)->n;

	if (!head || head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		exit(EXIT_FAILURE);
	}

	if (n > 127 || n < 0)
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
	else
		printf("%c\n", toascii(n));
}
