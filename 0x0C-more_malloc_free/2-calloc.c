#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate
 * @nmemb: in
 * @size: size
 * Return: change
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *g;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	g = malloc(y);

	if (g == NULL)
		return (NULL);

	while (x < y)
	{
		g[x] = 0;
		x++;
	}

	return (g);
}
