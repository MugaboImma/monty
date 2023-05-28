#include "monty.h"
/**
 * func_pop - A function that prints the top
 * @head: the stack head
 * @count: the line_num
 * Return: no return
 */
void func_pop(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
