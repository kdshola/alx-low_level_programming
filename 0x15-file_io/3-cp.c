#include "main.h"

void check_argc(int argc);
void check_read(ssize_t red, char *file, int fd_tocop, int fd_copto);
void check_write(ssize_t wrte, char *file, int fd_tocop, int fd_copto);
void check_close(int check, int fd);

/**
 * main - copies one file content to another
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char buf[1024];
	ssize_t red, wrt;
	int to, from, to_close, from_close;

	check_argc(argc);
	red = 1024;
	from = open(argv[1], O_RDONLY);
	check_read((size_t)from, argv[1], -1, -1);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	check_write((size_t)to, argv[2], from, -1);
	while (red == 1024)
	{
		red = read(from, buf, 1024);
		check_read(red, argv[2], from, to);
		wrt = write(to, buf, red);
		if (red != wrt)
			wrt = -1;
		check_write(wrt, argv[2], from, to);
	}
	from_close = close(from);
	to_close = close(to);
	check_close(from_close, from);
	check_close(to_close, to);
	return (0);

}

/**
 * check_argc - checks argument count
 * @argc: argument count
 * Return: void
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read - checks if file to copy from is accessible
 * @file: file name
 * @red: file status of file to copy from
 * @fd_tocop:filedescriptor of  file to copy from
 * @fd_copto:filedescriptor of  file to copy to
 * Return: Nothing
 */
void check_read(ssize_t red, char *file, int fd_tocop, int fd_copto)
{
	if (red == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file);
		if (fd_tocop != -1)
			close(fd_tocop);
		if (fd_copto != -1)
			close(fd_copto);
		exit(98);
	}
}

/**
 * check_write - checks read and write
 * @wrte: flag for write
 * @file: file name
 * @fd_tocop:filedescriptor of  file to copy from
 * @fd_copto:filedescriptor of  file to copy to
 * Return: void
 */

void check_write(ssize_t wrte, char *file, int fd_tocop, int fd_copto)
{
	if (wrte == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_tocop != -1)
			close(fd_tocop);
		if (fd_copto != -1)
			close(fd_copto);
		exit(99);
	}
}
/**
 * check_close - determines if file was closed
 * @flag: file status
 * @fd: file descriptor
 * Return: void
 */
void check_close(int flag, int fd)
{
	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
