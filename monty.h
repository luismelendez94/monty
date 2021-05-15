#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* DOUBLE LINKED LIST FUNCTIONS BELOW */

stack_t *addEndNode(stack_t **head, const int n);
stack_t *addnode(stack_t **head, const int n);
size_t printNode(const stack_t *h);
void freeList(stack_t *head);

/* LIST MANIPULATION */

stack_t *addEndNode(stack_t **head, const int n);
stack_t *addnode(stack_t **head, const int n);
size_t printNode(const stack_t *h);
void freeList(stack_t *head);

/* FUNCTIONS PER TASK */

int _isanum(char *str, int line);
void _pall(stack_t **head, unsigned int line);
void _pint(stack_t **head, unsigned int line);
void _pchar(stack_t **head, unsigned int line);
void _nop(stack_t **head, unsigned int line);
void _pop(stack_t **head, unsigned int line);
void _swap(stack_t **head, unsigned int line);
void _addInt(stack_t **headList, unsigned int lineNumber);
void _subInt(stack_t **headList, unsigned int lineNumber);
void _divInt(stack_t **headList, unsigned int lineNumber);
void _mulInt(stack_t **headList, unsigned int lineNumber);
void _modInt(stack_t **headList, unsigned int lineNumber);
void readBuffer(FILE *fd, char *buffer, ssize_t inputln);

/* GET OP FUNCTION */

void (*opfunc(char *token))(stack_t **head, unsigned int line);

#endif /* MONTY_H */
