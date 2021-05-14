#include "monty.h"

/**
 * readBuffer - Read buffer line by line
 * @fd: File descriptor
 * @buffer: Buffer
 * @inputln: File line read
 *
 */
void readBuffer(FILE *fd, char *buffer, ssize_t inputln)
{
	char *delim = " \n", *token = NULL;
	stack_t *head = NULL;
	int line = 1;
	size_t getSize = 1024;

	while (inputln != EOF)
	{
		token = strtok(buffer, delim);

		if (token[0] != '#')
		{
			if (strcmp(token, "push") == 0)
			{
				token = strtok(NULL, delim);
				if (token == NULL || _isanum(token, line))
				{
					printf("L%d: usage: push integer\n", line);
					exit(EXIT_FAILURE);
				}
				addnode(&head, atoi(token));
			}
			else
			{
				if (opfunc(token) != 0)
					opfunc(token)(&head, line);
				else
				{
					freeList(head);
					printf("L%d: unknown instruction %s\n", line, token);
					exit(EXIT_FAILURE);
				}
			}
		}
		line++;
		inputln = getline(&buffer, &getSize, fd);
	}
}
