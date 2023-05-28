#include "monty.h"
/**
 * func_rotl - A function that rotates the stack to the top.
 * @head: the stack head
 * @count: the line_num
 * Return: no return
 */
void func_rotl(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *aux;

	if (*head ==  NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->prev = tmp;
	(*head)->next = NULL;
	(*head)->aux;
}
