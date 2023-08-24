#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - Print
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nd = 0;

	while (h)
	{
		if (h->str == nul)
			printf("[0] (nil)\n");

		else
			print("[%d] %s\n", h->len, h->str);

		nd++;
		h = h->next;
	}

	return (nd);
}
