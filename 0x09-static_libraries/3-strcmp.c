#include "main.h"
/**
 * _strcmp - compare pro
 * @s1: in value
 * @s2: in value
 * Return: change
 */
int _strcmp(char *s1, char *s2)
{
	int o = 0;

	while (s1[o] != '\0' && s2[o] != '\0')
	{
		if (s1[o] != s2[o])
		{
			return (s1[o] - s2[o]);
		}
	o++;
	}
	return (0);
}
