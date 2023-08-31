#include "main.h"
#include <stddef.h>

/**
 * flip_bits - flip together
 * @n: number
 * @m: number
 * Return: n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_equal = n ^ m;
	unsigned int flip = 0;

	while (xor_equal > 0)
	{
		flip += xor_equal & 1;
		xor_equal >>= 1;
	}

	return (flip);
}
