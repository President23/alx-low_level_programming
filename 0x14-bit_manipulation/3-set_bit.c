#include "main.h"
#include <stddef.h>

/**
 * set_bit - set
 * @n: number
 * @index: index of bit
 * Return: 1 r 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
