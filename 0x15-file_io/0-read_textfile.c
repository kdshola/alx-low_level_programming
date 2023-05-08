#include "main.h"

/**
 * read_textfile - reads a text file and prints ro stdout
 * @filename: name of file
 * @letters: number of haracters to print
 * Return: No of bites printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, red, wrt;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	red = read(opn, buf, letters);
	wrt = write(STDOUT_FILENO, buf, red);

	if (opn < 0 || red < 0 || wrt < 0 || wrt != red)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(opn);
	return (wrt);
}
