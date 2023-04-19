#include "3-calc.h"

/**
 * main - entry point performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+" ) && strcmp(argv[2], "-")
			&& strcmp(argv[2], "*")
			&& strcmp(argv[2], "/")
			&& strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = get_op_func(argv[2])(a, b);
	if (c == 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", c);
	return (0);
}
