#include "monty.h"
/**
 * func_add - A function that implement the add opcode.
 * @head: stack head
 * @count: the line_num
 * Return: no return
 */
void func_add(stack_t **head, unsigned int count)
{
	stack_t *h;
	int aux;
	int i = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		free(bus.content);
		fclose(bus.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
