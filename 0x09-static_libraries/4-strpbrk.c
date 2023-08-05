#include "main.h"

/**
 * _strpbrk - ent 4 pro
 * @s: in
 * @accept: in
 * Return: change
 */
char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			return (s);
		}
	s++;
	}

	return ('\0');
}
