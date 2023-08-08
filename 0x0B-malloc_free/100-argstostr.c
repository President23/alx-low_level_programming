#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert
 * @ac: in
 * @av: in
 * Return: change
 */

char *argstostr(int ac, char **av)
{
	int p = 0, q = 0, r = 0, t = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (q < ac)
	{
		while (av[q][r])
		{
			p++;
			r++;
		}

		r = 0;
		q++;
	}

	s = malloc((sizeof(char) * p) + ac + 1);

	q = 0;
	while (av[q])
	{
		while (av[q][r])
		{
			s[t] = av[q][r];
			t++;
			r++;
		}

		s[t] = '\n';

		r = 0;
		t++;
		q++;
	}

	t++;
	s[t] = '\0';
	return (s);
}
