#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node
 * @head: ptr
 * @index: index
 * Return: change
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *thing = *head;
	listint_t *current = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(thing);
		return (1);
	}

	while (z < index - 1)
	{
		if (!thing || !(thing->next))
			return (-1);
		thing = thing->next;
		z++;
	}

	current = thing->next;
	thing->next = current->next;
	free(current);

	return (1);
}
