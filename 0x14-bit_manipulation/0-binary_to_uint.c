#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts into binary
 * @b: str ptr
 * Return: 1 or 0 or b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bin = (bin * 2) + (*b - '0');
		b++;
	}

	return (bin);
}
