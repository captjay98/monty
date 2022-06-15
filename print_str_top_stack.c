#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hi;
	(void)counter;

	hi = *head;
	while (hi)
	{
		if (hi->n > 127 || hi->n <= 0)
		{
			break;
		}
		printf("%c", hi->n);
		hi = hi->next;
	}
	printf("\n");
}
