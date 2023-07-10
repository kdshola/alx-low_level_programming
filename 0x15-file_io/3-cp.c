#include "main.h"

/**
 * check_usage - checks for proper program usage
 * @argc: argument count
 * Return void
 */
void check_usage(int argc)
{
	char error_message[] = "Usage: cp file_from file_to\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", error_message);
		exit(97);
	}
}

/**
 * close_file - closes files
 * @file_1: fd of first file
 * @file_2: fd of file 2
 * Return: void
 */
void close_file(int file_1, int file_2)
{
	int status_1, status_2;

	status_1 = close(file_1);
	status_2 = close(file_2);
	if (status_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}
	if (status_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_2);
		exit(100);
	}
}

/**
 * read_error - checks for read and write error
 * @status: file status
 * @file_1: fd to file to copy from
 * @file_2: fd to file to copy to
 * @argv: argument vectors
 * Return: Nothing
 */
void read_error(int status, int file_1, int file_2, char **argv)
{
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if (file_1 != -1)
			close(file_1);
		if (file_2 != -1)
			close(file_2);
		exit(98);
	}
}

/**
 * write_error - checks for read and write error
 * @status: file status
 * @file_1: fd to file to copy from
 * @file_2: fd to file to copy to
 * @argv: argument vectors
 * Return: Mothing
 */
void write_error(int status, int file_1, int file_2, char **argv)
{
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (file_1 != -1)
			close(file_1);
		if (file_2 != -1)
			close(file_2);
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
	int file_1, file_2;
	ssize_t letters_wrote, letters_read = 1024;
	char buffer[1024];
	mode_t permissions;

	check_usage(argc);
	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_1 = open(argv[1], O_RDONLY);
	read_error(file_1, file_1, -1, argv);
	file_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	write_error(file_2, file_1, file_2, argv);
	while (letters_read == 1024)
	{
		letters_read = read(file_1, buffer, 1024);
		read_error(letters_read, file_1, file_2, argv);
		letters_wrote = write(file_2, buffer, letters_read);
		write_error(letters_wrote, file_1, file_2, argv);
	}
	close_file(file_1, file_2);
	return (0);
}
