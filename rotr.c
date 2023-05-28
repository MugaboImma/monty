#include "monty.h"
/**
 * func_rotr - A function that rotates the stack to the bottom.
 * @head: the stack head
 * @count: the line_num
 * Return: no return
 */
void func_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cp;

	cp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
