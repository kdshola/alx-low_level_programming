#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of text file
 * @text_content: letters to write to file
 * Return: 1 else -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, letter_cnt, letter_wrt;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letter_cnt = 0; text_content[letter_cnt]; letter_cnt++)
			;
		letter_wrt = write(fd, text_content, letter_cnt);
		if (letter_wrt == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

