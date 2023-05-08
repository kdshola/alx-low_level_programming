#include "main.h"

/**
 * append_text_to_file - appends to given file
 * @filename: file name
 * @text_content: string to append
 * Return: 1 on sucess else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed, wrt;
	size_t strle = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[strle])
			strle++;
	}
	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
		return (-1);
	if (strle)
		wrt = write(filed, text_content, strle);
	close(filed);
	if (wrt == -1)
		return (-1);
	return (1);
}
