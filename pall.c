#include "monty.h"

/**
 * func_pall - A function that implement the pall opcodes.
 * @head: the stack head
 * @count: not used
 * Return: no return
 */
void func_pall(stack_t **head, unsigned int count)
{
	(void)count;
	stack_t *h;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

}
