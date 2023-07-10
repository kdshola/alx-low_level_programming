#include "main.h"

/**
 * read_write_error - checks for read and write error
 * @file_1: fd to file to copy from
 * @file_2: fd to file to copy to
 * @argv: argument vectors
 * Return: Mothing
 */
void read_write_error(int file_1, int file_2, char **argv)
{
	if (file_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point copies text from one file to another
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	int file_1, file_2, status = 0;
	ssize_t letters_write, letters_read = 1024;
	char buffer[1024];
	char error_message[] = "Usage: cp file_from file_to";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", error_message);
	}
	file_1 = open(argv[1], O_RDONLY);
	file_2 = open(argv[2], O_CREAT | O_RDONLY | O_APPEND | O_TRUNC, 0664);
	read_write_error(file_1, file_2, argv);
	while (letters_read == 1024)
	{
		letters_read = read(file_1, buffer, 1024);
		if (letters_read == -1)
			read_write_error(-1, 0, argv);
		letters_write = write(file_2, buffer, letters_read);
		if (letters_write == -1)
			read_write_error(0, -1, argv);
	}
	status = close(file_1);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}
	status = close(file_2);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_2);
		exit(100);
	}
	return (0);
}
