#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_bit - teturn bit
 * @n: insigned int
 * @index: the indx of bit
 * Return: value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
