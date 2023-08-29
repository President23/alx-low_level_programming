#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert
 * @head: ptr
 * @idx: index
 * @n: data
 * Return: change
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *add_node;
	listint_t *thing = *head;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
		return (add_node);
	}

	for (z = 0; thing && z < idx; z++)
	{
		if (z == idx - 1)
		{
			add_node->next = thing->next;
			thing->next = add_node;
			return (add_node);
		}
		else
			thing = thing->next;
	}

	return (NULL);
}
