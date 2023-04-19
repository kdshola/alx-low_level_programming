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
	char op[] = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strncmp(argv[2], op, 1) && strncmp(argv[2], (op + 1), 1)
			&& strncmp(argv[2], (op + 2), 1)
			&& strncmp(argv[2], (op + 3), 1)
			&& strncmp(argv[2], (op + 3), 1))
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
