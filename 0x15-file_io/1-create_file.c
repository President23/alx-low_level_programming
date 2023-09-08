#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - prg create
 * @filename: name
 * @text_content: cont writ
 * Return: 1 r -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int byte_in;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		byte_in = 0;
		while (text_content[byte_in] != '\0')

			byte_in++;
		if (write(file, text_content, byte_in) == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
