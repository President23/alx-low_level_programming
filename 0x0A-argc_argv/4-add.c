#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print
 * @argc: in
 * @argv: in
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;
	unsigned int d, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			e = argv[c];

			for (d = 0; d < strlen(e); d++)
			{
				if (e[d] < 48 || e[d] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
