#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - mulltiply
 * @argc: in
 * @argv: in
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int z1 = 0, z2 = 0;

	if (argc == 3)
	{
		z1 = atoi(argv[1]);
		z2 = atoi(argv[2]);
		printf("%d\n", z1 * z2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
