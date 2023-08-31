#include "main.h"
#include <stddef.h>

/**
 * get_endianness - checks
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int sth = 1;
	char *check = (char *)&sth;

	if (*check)
		return (1);
	else
		return (0);
}
