#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints
 * @h: a ptr
 * Return: nbr of nd
 */

size_t print_listint(const listint_t *h)
{
	size_t sth = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		sth++;
		h = h->next;
	}

	return (sth);
}
