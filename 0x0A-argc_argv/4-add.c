#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point, prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i, d, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d] != '\0'; d++)
		{
			if (!isdigit(argv[i][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
