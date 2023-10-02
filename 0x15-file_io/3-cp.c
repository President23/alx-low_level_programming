#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - copy sth
 * @argc: number of array
 * @argv: array of command
 * Return: 0 or error
 */

int main(int argc, char *argv[])
{
	int lengf, lengt, biter, reader;
	char bfer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s lengf lengt\n", argv[0]);
		exit(97);
	}

	lengf = open(argv[1], O_RDONLY);
	if (lengf == -1)
	{
		dprintf(2, "Error: can't read from file%s\n", argv[1]);
		exit(98);
	}

	lengt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (lengt == -1)
	{
		dprintf(2, "Error: can't write to %s\n", argv[2]);
		close(lengf);
		exit(99);
	}

	while ((biter = read(lengf, bfer, sizeof(bfer))) > 0)
	{
		reader = write(lengt, bfer, biter);
		if (reader == -1 || reader != biter)
		{
			dprintf(2, "Error: Can't erite to %s\n", argv[2]);
			close(lengf);
			close(lengt);
			exit(99);
		}
	}

	if (biter == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(lengf);
		close(lengt);
		exit(98);
	}

	if (close(lengf) == -1 || close(lengt) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close(lengf) == -1);
		exit(100);
	}

	return (0);
}
