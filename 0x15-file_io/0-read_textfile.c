#include "main.h"

/**
 * read_textfile - reads a textfile and prints to stdout
 * @filename: name of text file
 * @letters: number of letters read
 * Return: number of printerd letters else 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t read_chars, write_chars;
	char *buf;

	if (!filename)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	read_chars = read(file_d, buf, letters);
	write_chars = write(STDOUT_FILENO, buf, read_chars);
	free(buf);
	close(file_d);
	return (write_chars);
}
