#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - fre
 * @head: ptr
 */

void free_listint2(listint_t **head)
{
	listint_t *sth;

	if (head == NULL)
		return;

	while (*head)
	{
		sth = (*head)->next;
		*head = (*head)->next;
		free(sth);
	}
}

