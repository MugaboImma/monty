#include "monty.h"
/**
 * func_pstr - A function that prints the string starting at the top
 * of the stack, followed by a new line.
 * @head: the stack head
 * @count: the line_num
 * Return: no return
 */
void func_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
