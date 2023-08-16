#include <stdio.h>
#include <stdlib.h>

/**
* main - prints
* @argc: number of arguments
* @argv: array of arguments
* Return: ..
*/

int main(int argc, char *argv[])
{
	int bit, a;
	char *egg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bit = atoi(argv[1]);

	if (bit < 0)
	{
		printf("Error\n");
		exit(2);
	}

	egg = (char *)main;

	for (a = 0; a < bit; a++)
	{
		if (a == bit - 1)
		{
			printf("%02hhx\n", egg[a]);
			break;
		}
		printf("%02hhx ", egg[a]);
	}
	return (0);
}

