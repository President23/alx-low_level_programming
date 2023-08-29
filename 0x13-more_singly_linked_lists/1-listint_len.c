#include "lists.h"
#include <stddef.h>

/**
 * listint_len - return nbr
 * @h: ptr
 * Return: nbr ov nd
 */

size_t listint_len(const listint_t *h)
{
	size_t sth = 0;

	while (h != NULL)
	{
		sth++;
		h = h->next;
	}

	return (sth);
}
