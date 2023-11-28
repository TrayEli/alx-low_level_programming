#include "main.h"

/**
 * read_file - Creates a new file print to STDOUT
 *
 * @filename: text file being read
 *
 * @text_content: Param description
 *
 * Return: read and print 0 when function fails or filename is NULL
 */

int read_file(const char *filename, const char *text_content)
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

