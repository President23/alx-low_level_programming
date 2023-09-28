#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * set_bit - sets value of bit
 * @n: Ptr unsigned int
 * @index: indx of bit
 * Return: 1 worked or -1 not worked
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
