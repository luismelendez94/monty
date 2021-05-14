#include "monty.h"

/**
 *_pint - prints the ascii value of element at top of stack
 *@head: is the pointer to the first node
 *@line: number of the line
 */

void _pchar(stack_t **head, unsigned int line)
{
	int n = (*head)->n;
	char charValue = n+'0';

	if (!head)
	{
		printf("L%d: can't pchar, stack empty", line);
		exit(EXIT_FAILURE);
	}
	if (n > 127)
		printf("L%d: can't pchar, value out of range", line);
	else
		printf("%c\n", charValue);
}
