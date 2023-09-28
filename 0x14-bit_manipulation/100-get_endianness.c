#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_endianness - checks the endiannes
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int endi = 1;
	char *ness = (char *)&endi;

	return (*ness);
}
