#include "monty.h"

/**
 *main - will call other functions
 *@argc: argument count
 *@argv: argument filename
 *Return: will return 0
 */

int main(int argc, char *argv[])
{
	FILE *fd;
/*	ssize_t inputln;	*/
	char *buffer;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	readBuffer(fd, buffer);
	free(buffer);
	fclose(fd);
	return (0);
}
