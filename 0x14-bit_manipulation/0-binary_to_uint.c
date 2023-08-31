#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - cnvrts
 * @b: ptr
 * Return: cnvrts
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int equal = 0;
	int z = 0;

	if (b == NULL)
		return (0);

	while (b[z] != '\0')
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);

		equal = equal * 2 + (b[z] - '0');
		z++;
	}

	return (equal);
}
