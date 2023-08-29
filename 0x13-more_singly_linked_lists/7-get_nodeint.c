#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the node
 * @head: ptr
 * @index: index
 * Return: ptr
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *thing = head;

	while (thing && z < index)
	{
		thing = thing->next;
		z++;
	}

	return (thing ? thing : NULL);
}
