#include "main.h"
/**
 * _strchr - entr 4 pro
 * @s: in v
 * @c: in v
 * Return: 0 done
 */
char *_strchr(char *s, char c)
{
	int v = 0;

	for (; s[v] >= '\0'; v++)
	{
		if (s[v] == c)
			return (&s[v]);
	}
	return (0);
}
