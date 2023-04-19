#include <stdio.h>
#include <stdlib.h>

/**
 * opcode_print - prints opcodes of this program
 * @mainptr: pointer to the main function
 * @bte: no of bytes to print
 * Return: void
 */
void opcode_print(char *mainptr, int bte)
{
	int j;

	for (j = 0; j < bte; j++)
	{
		printf("%.2hhx", mainptr[j]);
		if (j < (bte - 1))
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * prints its own opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b;

	if (argc != 2)
	{
		printf("Erroe\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode_print((char *)&main, b);
	return (0);
}
