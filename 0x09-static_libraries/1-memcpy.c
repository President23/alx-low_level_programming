#include "main.h"
/**
 * _memcpy - a func 2 cpy
 * @dest: m storage
 * @src: m copy
 * @n: n
 *
 * Return: changes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int f = n;

	for (; g < f; g++)
	{
		dest[g] = src[f];
		n--;
	}
	return (dest);
}
