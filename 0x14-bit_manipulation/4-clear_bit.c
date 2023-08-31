#include <stddef.h>
#include "main.h"

/**
 * clear_bit - sets
 * @n: number
 * @index: the index of bit
 * Return: 1 r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
