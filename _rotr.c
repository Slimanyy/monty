#include "monty.h"

/**
 * _rotr - rotate the stack to the bottom
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	int swap;
	stack_t *tmp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (tmp->next)
		tmp = tmp->next;

	swap = tmp->n;

	while (tmp->prev != NULL)
	{
		tmp->n = tmp->prev->n;
		tmp = tmp->prev;
	}
	tmp->n = swap;
}
