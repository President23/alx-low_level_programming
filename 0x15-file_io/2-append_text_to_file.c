#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends
 * @filename: name
 * @text_content: text
 * Return: 1 r -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int byte_in;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
