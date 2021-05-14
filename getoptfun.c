#include "monty.h"

/**
 * opfunc - Verify optcode to call its respective function
 * @token: Token with optcode
 * Return: The pointer to its function
 *
 */
void (*opfunc(char *token))(stack_t **stack, unsigned int line)
{
	instruction_t inst[] = {
		{"pall", _pall},
		{"pint", _pint},
		{"pchar", _pchar},
		{"nop", _nop},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _addInt},
		{"sub", _subInt},
		{"div", _divInt},
		{"mul", _mulInt},
		{"mod", _modInt},
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
