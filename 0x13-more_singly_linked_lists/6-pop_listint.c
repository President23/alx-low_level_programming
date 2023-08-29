#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes
 * @head: ptr
 * Return: change
 */

int pop_listint(listint_t **head)
{
	listint_t *thing;
	int sth;

	if (*head == NULL)
		return (0);

	sth = (*head)->n;
	thing = (*head)->next;
	free(*head);
	*head = thing;

	return (sth);
}
