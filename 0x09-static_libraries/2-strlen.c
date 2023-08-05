#include "main.h"
/**
 * _strlen - pro 4 leng string
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int me = 0;

	while (*s != '\0')
	{
		me++;
		s++;
	}
	return (me);
}
