#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - creates filr
 * @filename: name of file
 * @text_content: wrote in file
 * Return: 1 succ or -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int filedis;
	ssize_t leng = 0;

	if (filename == NULL)
		return (-1);

	filedis = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
