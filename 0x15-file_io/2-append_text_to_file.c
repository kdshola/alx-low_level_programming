#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of text file
 * @text_content: content to append to file
 * Return: 1 else -1 on failure or file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letter_count, letter_write;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == 0)
		return (-1);
	if (text_content)
	{
		for (letter_count = 0; text_content[letter_count]; letter_count++)
			;
		letter_write = write(fd, text_content, letter_count);
		if (letter_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
