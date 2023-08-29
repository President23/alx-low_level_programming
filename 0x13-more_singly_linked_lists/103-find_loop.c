#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds
 * @head: linked ls
 * Return: change
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fst = head;
	listint_t *lst = head;

	if (!head)
		return (NULL);
	
	while (lst && fst && fst->next)
	{
		fst = fst->next->next;
		lst = lst->next;
		if (fst == lst)
		{
			slow = head;
			while (lst != fst)
			{
				fst = fst->next;
				lst = lst->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
