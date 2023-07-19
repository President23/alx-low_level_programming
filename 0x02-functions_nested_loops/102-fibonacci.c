#include <stdio.h>

/**
 * maain - prints the first  52
 * Return: nothing
 */
{

	int  i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 50)
	printf("ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
