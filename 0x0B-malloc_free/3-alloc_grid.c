#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - dream
 * @width: in
 * @height: in
 * Return: change
 */
int **alloc_grid(int width, int height)
{
	int e, b, c, d;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (e = 0; e < height; e++)
	{
		a[e] = malloc(sizeof(int) * width);

		if (a[e] == NULL)
		{
			for (b = e; b >= 0; b--)
			{
				free(a[b]);
			}

			free(a);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			a[d][d] = 0;
		}
	}
	return (a);
}
