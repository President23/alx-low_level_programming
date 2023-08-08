#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - conc two string
 * @s1: in 1
 * @s2: in 2
 * Return: change
 */

char *str_concat(char *s1, char *s2)
{
	int w = 0, x = 0, y = 0, z = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[w])
		w++;

	while (s2[x])
		x++;

	z = w + x;
	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);

	x = 0;

	while (y < z)
	{
		if (y <= w)
			s[y] = s1[y];

		if (y >= w)
		{
			s[y] = s2[y];
			y++;
		}

		y++;
	}

	s[y] = '\0';
	return (s);
}
