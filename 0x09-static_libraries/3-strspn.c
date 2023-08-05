#include "main.h"

/**
 * _strspn - ent point
 * @s: in
 * @accept: in
 * Return: change
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
			{
				g++;
				break;
			}
			else if (accept[h + 1] == '\0')
				return (g);
		}

		h++;
	}
	return (g);
}
