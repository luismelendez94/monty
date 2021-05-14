#include "monty.h"

/**
 * _addInt - Adds the top two integers
 * @headList: Pointer to head of stack
 * @lineNumber: Number of the line
 *
 */
void _addInt(stack_t **headList, unsigned int lineNumber)
{
	stack_t *temp1, *temp2;

	if (*headList == NULL || (*headList)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	temp1 = (*headList)->next;
	temp2 = *headList;

	temp1->n = temp1->n + temp2->n;
	*headList = (*headList)->next;
	(*headList)->prev = NULL;
	free(temp2);
}

/**
 * _subInt - Substract the top two integers
 * @headList: Pointer to head of stack
 * @lineNumber: Number of the line
 *
 */
void _subInt(stack_t **headList, unsigned int lineNumber)
{
	stack_t *temp1, *temp2;

	if (*headList == NULL || (*headList)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	temp1 = (*headList)->next;
	temp2 = *headList;

	temp1->n = temp1->n - temp2->n;
	*headList = (*headList)->next;
	(*headList)->prev = NULL;
	free(temp2);
}

/**
 * _divInt - Divide the top two integers
 * @headList: Pointer to head of stack
 * @lineNumber: Number of the line
 *
 */
void _divInt(stack_t **headList, unsigned int lineNumber)
{
	stack_t *temp1, *temp2;

	if (*headList == NULL || (*headList)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	temp1 = (*headList)->next;
	temp2 = *headList;

	if (temp2->n == 0)
	{
		printf("L%d: division by zero\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	temp1->n = temp1->n / temp2->n;
	*headList = (*headList)->next;
	(*headList)->prev = NULL;
	free(temp2);
}

/**
 * _mulInt - Multiply the top two integers
 * @headList: pointer to head of stack
 * @lineNumber: Number of the line
 *
 */
void _mulInt(stack_t **headList, unsigned int lineNumber)
{
	stack_t *temp1, *temp2;

	if (*headList == NULL || (*headList)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	temp1 = (*headList)->next;
	temp2 = *headList;

	temp1->n = temp1->n * temp2->n;
	*headList = (*headList)->next;
	(*headList)->prev = NULL;
	free(temp2);
}

/**
 * _modInt - Calculate module of the top two integers
 * @headList: Pointer to head of stack
 * @lineNumber: Number of the line
 *
 */
void _modInt(stack_t **headList, unsigned int lineNumber)
{
	stack_t *temp1, *temp2;

	if (*headList == NULL || (*headList)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	temp1 = (*headList)->next;
	temp2 = *headList;

	if (temp2->n == 0)
	{
		printf("L%d: division by zero\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	temp1->n = temp1->n % temp2->n;
	*headList = (*headList)->next;
	(*headList)->prev = NULL;
	free(temp2);
}
