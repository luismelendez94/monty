#include "monty.h"

/**
 *opfunc - optcode to call its respective function
 *@token: token
 *Return: the pointer to its function
 */

void (*opfunc(char *token))(stack_t **stack, unsigned int line)
{
	instruction_t inst[] = {
		{"pall", _pall},
		{"pint", _pint},
		{"nop", _nop},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{NULL, NULL}
	};

	int i = 0;

	while (inst[i].f != NULL)
	{
		if (strcmp(token, inst[i].opcode) == 0)
			return (inst[i].f);
		i++;
	}
	return (NULL);
}
