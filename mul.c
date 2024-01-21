#include "monty.h"
/**
 * f_mul - multiplies the stack.
 * @head: head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *y;
	int len = 0, aux;

	y = *head;
	while (y)
	{
		y = y->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	y = *head;
	aux = y->next->n * y->n;
	y->next->n = aux;
	*head = y->next;
	free(y);
}
