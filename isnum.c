#include "monty.h"

/**
 * _isanum - check if character is integer type
 * @str: token to verify
 * @line: line number
 * Return: 1 if fails or 0 if successful
 */

int _isanum(char *str, int line)
{
	int i;
	(void) line;

	printf("Input: %s --- After atoi(): %i\n", str, atoi(str));

	if (str[0] == '-' || str[0] < '0' || str[0] > '9')
	{
		for (i = 1; str[i] != '\0'; i++)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				return (1);
			}
		}
	}
/*
	for (i = 0; str[i] != '\0'; i++)
	{
		if (strcmp(str, "-"))
		{
			i++;
			if (isdigit(str))
				return (1);
		}
		else if (isdigit(str))
			return (1);
		else
			return (1);
	}
*/
	return (0);
}



