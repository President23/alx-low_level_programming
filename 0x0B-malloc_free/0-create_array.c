#include "main.h"
#include <stdlib.h>
/**
 * create_array - to create
 * @size: the in size
 * @c: the char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int q;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (q = 0; q < size; q++)
	{
		s[q] = c;
	}
	return (s);
}
