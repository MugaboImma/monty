#include "monty.h"
/**
 * func_mul - implement the mul opcode that multiplies the 2nd top
 * element of stack
 * @head: the stack head
 * @count: the line_num
 * Return: no return
 */
void func_mul(stack_t **head, unsigned int count)
{
	stack_t *h;
	int i = 0;
	int aux;

	h = *head;
	while (h)
	{
		h = h->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count)
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
