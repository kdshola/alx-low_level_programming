#include <stdio.h>

/**
 * main - Entry point, prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
