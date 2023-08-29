#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free
 * @head: ptr
 */

void free_listint(listint_t *head)
{
	listint_t *sth;

	while (head != NULL)
	{
		sth = head;
		head = head->next;
		free(sth);
	}
}
