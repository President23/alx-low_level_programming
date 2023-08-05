#include "main.h"
/**
 * _memset - value program
 * @s: the address
 * @b: first value
 * @n: num
 *
 * Return: bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}
