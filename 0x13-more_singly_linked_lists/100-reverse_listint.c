#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - rev
 * @head: ptr
 * Return: ptr
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

