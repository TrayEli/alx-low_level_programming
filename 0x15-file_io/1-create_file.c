#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a new file
 *
 * @filename: name of the file to create
 *
 * @text_content: is a NULL terminated to write a file
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fp, length = 0, fpWrite;

	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	fpWrite = write(fp, text_content, length);

	if (fpWrite == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
