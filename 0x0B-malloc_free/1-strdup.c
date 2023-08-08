#include "main.h"
#include <stdlib.h>
/**
 * _strdup - dupl a thing
 * @str: to be dupl
 * Return: change
 */
char *_strdup(char *str)
{
	int w = 0, v = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[v])
	{
		v++;
	}

	s = malloc((sizeof(char) * v) + 1);

	if (s == NULL)
		return (NULL);

	while (w < v)
	{
		s[w] = str[w];
		w++;
	}

	s[w] = '\0';
	return (s);
}
