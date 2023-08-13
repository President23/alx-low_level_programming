#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array
 * @min: in
 * @max: in
 * Return: change
 */

int *array_range(int min, int max)
{
	int *g, z = 0;

	if (min > max)
		return (NULL);

	g = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (g == NULL)
		return (NULL);

	while (min <= max)
	{
		g[z] = min;
		z++;
		min++;
	}

	return (g);
}
