#include "main.h"

/**
 * char *_strcpy - copy pro
 * @dest: in
 * @src: in
 * Return: result
 */
char *_strcpy(char *dest, char *src)
{
	int v = 0;
	int w = 0;

	while (*(src + v) != '\0')
	{
		v++;
	}
	for ( ; w < v ; w++)
	{
		dest[w] = src[v];
	}
	dest[v] = '\0';
	return (dest);
}
