#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - reads text inside
 * @filename: name of the file
 * @letters: number of letters
 * Return: the real number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedis;
	ssize_t biter, reader;
	char *bfer;

	if (filename == NULL)
		return (0);

	filedis = open(filename, O_RDONLY);
	if (filedis == -1)
		return (0);

	bfer = malloc(sizeof(char) * letters);
	if (bfer == NULL)
	{
		close(filedis);
		return (0);
	}

	biter = read(filedis, bfer, letters);
	if (biter == -1)
	{
		close(filedis);
		free(bfer);
		return (0);
	}

	reader = write(STDOUT_FILENO, bfer, biter);
	if (reader == -1 || reader != biter)
	{
		close(filedis);
		free(bfer);
		return (0);
	}

	close(filedis);
	free(bfer);
	return (reader);
}
