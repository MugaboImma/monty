#include "monty.h"
/**
 * func_pchar - A function that prints the char at the top
 * of the stack followed by a new line
 * @head: the stack head
 * @count: the line_num
 * Return: no return
 */
void func_pchar(stack_t **head, unsigned int count)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
