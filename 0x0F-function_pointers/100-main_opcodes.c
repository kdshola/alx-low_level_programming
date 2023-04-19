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
		if (j < bte - 1)
			printf("%.2hhx ", mainptr[j]);
		else
			printf("%.2hhx", mainptr[j]);
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
	int bte;

	if (argc != 2)
	{
		printf("Erroe\n");
		exit(1);
	}
	bte = atoi(argv[1]);
	if (bte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode_print((char *)main, bte);
	return (0);
}
