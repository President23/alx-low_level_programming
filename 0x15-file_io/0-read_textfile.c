#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * read_textfile - read
 * @filename: name
 * @letters: nbr
 * Return: nbr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd_in, byte_in;
	char *buff;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		close(file);
		return (0);
	}

	rd_in = read(file, buff, letters);

	if (rd_in == -1)
	{
		close(file);
		free(buff);
		return (0);
	}

	byte_in = write(STDOUT_FILENO, buff, rd_in);

	if (byte_in == -1 || byte_in != rd_in)
	{
		close(file);
		free(buff);
		return (0);
	}

	close(file);
	free(buff);

	return (byte_in);
}
