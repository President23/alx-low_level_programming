#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node
 * @head: ptr
 * @n: data
 * Return: ptr
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_node, *thing;

	added_node = malloc(sizeof(listint_t));

	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
		*head = added_node;
	else
	{
		thing = *head;
		while (thing->next != NULL)
			thing = thing->next;
		thing->next = added_node;
	}

	return (*head);
}
