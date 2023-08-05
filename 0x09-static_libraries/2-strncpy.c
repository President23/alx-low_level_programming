#include "main.h"
/**
 * _strncpy - pro to cpy
 * @dest: in value
 * @src: in value
 * @n: in value
 *
 * Return: .
 */
char *_strncpy(char *dest, char *src, int n)
{
	int e = 0;

	while (e < n && src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}
	return (dest);
}
