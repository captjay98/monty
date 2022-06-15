#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxi;
	int sus, nodes;

	auxi = *head;
	for (nodes = 0; auxi != NULL; nodes++)
		auxi = auxi->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = *head;
	sus = auxi->next->n - auxi->n;
	auxi->next->n = sus;
	*head = auxi->next;
	free(auxi);
}
