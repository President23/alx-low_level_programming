#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate
 * @ptr: in
 * @old_size: in
 * @new_size: in
 * Return: change
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *vptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		vptr = malloc(new_size);

		if (vptr == NULL)
			return (NULL);

		return (vptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	vptr = malloc(new_size);

	if (vptr == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
	{
		vptr[a] = ((char *) ptr)[a];
	}

	free(ptr);
	return (vptr);
}
