#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - calc sum
 * @head: fst p
 * Return: change
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *thing = head;

	while (thing)
	{
		add += thing->n;
		thing = thing->next;
	}

	return (add);
}
