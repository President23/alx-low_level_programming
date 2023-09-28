#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * clear_bit - set the value
 * @n: ptr unsigned int
 * @index: the index of bit
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n & ~(1 << index));

	return (1);
}
