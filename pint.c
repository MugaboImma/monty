#include "monty.h"
/**
 * func_pint - A function that prints the top
 * @head: the stack head
 * @count: the line_num
 * Return: no return
 */
void func_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
