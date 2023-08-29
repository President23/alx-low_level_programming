#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new nod
 * @head: ptr
 * @n: int
 * Return: ptr
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));

	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}
