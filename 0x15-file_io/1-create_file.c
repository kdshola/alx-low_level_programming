#include "main.h"

/**
 * create_file - Creates a file and writes content into it
 * @text_content: file content to write
 * @filename: name of file
 * Return: 1 on sucess else -1
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	opn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);
	if (opn < 0 || wrt < 0)
		return (-1);
	close(opn);
	return (1);
}
