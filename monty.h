#ifdef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - The doubly linked list of a queue or a stack
 * @n: an integer n
 * @prev: A pointer that points to the previous stack or queue element
 * @next: A pointer that points to the next stack or queue element
 *
 * Description: Doubly linked list node struct for stack,
 * queue, LIFO and FIFO
 */
typedef struct stack_s
{
	struct stack_s *prev;
	int n;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - The opcode and its functions
 * @opcode: the opcode
 * @func: a function to handle the opcode
 *
 * Description: The opcode and its functions for
 * stack, queue, LIFO and FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*func)(stack_t **stack, unsigned int line_num);
} instruction_t;
extern stack_t *head; /* Global Variable */

/* All prototypes */
void func_push(stack_t **head, unsigned int num);
void func_pall(stack_t **head, unsigned int num);
void func_pint(stack_t **head, unsigned int num);
void func_pop(stack_t **head, unsigned int count);
void func_swap(stack_t **head, unsigned int count);
void func_add(stack_t **head, unsigned int count);
void func_nop(stack_t **head, unsigned int count);
void func_sub(stack_t **head, unsigned int count);
void func_div(stack_t **head, unsigned int count);
void func_mul(stack_t **head, unsigned int count);
void func_mod(stack_t **head, unsigned int count);
void func_pchar(stack_t **head, unsigned int count);
void func_pstr(stack_t **head, unsigned int count);
void func_rotl(stack_t **head, unsigned int count);
void func_rotr(stack_t **head, __attribute__((unused)) unsigned int count);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void func_queue(stack_t **head, unsigned int count);
void func_stack(stack_t **head, unsigned int count);
void free_stack(stack_t **head);
int execute(char *content, stack_t **head, unsigned int count, FILE *file);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);

#endif /* MONTY_H */
