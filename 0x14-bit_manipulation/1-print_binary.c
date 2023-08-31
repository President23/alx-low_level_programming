#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: number
 * Return: change
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
