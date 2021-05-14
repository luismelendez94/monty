#include "monty.h"

/**
 * _isanum - check if character is integer type
 * @str: token to verify
 * @line: line number
 * Return: 1 if fails or 0 if successful
 */

int _isanum(char *str, int line)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] < '0' || str[index] > '9')
		{
			printf("L<%d>: usage: push integer\n", line);
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}
