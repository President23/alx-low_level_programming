#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * flip_bits - calc the num of bit
 * @n: 1st num
 * @m: 2nd num
 * Return: num of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num1 = n ^ m;
	unsigned int get = 0;

	while (num1 > 0)
	{
		get += num1 & 1;
		num1 >>= 1;
	}

	return (get);
}
