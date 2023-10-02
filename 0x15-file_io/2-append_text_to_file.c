#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text
 * @filename: name of file
 * @text_content: include writeds in text
 * Return: 1 or 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedis;
	ssize_t leng = 0;

	if (filename == NULL)
		return (-1);

	filedis = open(filename, O_WRONLY | O_APPEND);
	if (filedis == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[leng] != '\0')
			leng++;

		if (write(filedis, text_content, leng) == -1)
		{
			close(filedis);
			return (-1);
		}
	}

	close(filedis);
	return (1);
}
