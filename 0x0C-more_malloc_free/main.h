#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


#include <stdlib.h>
#include <stdio.h>

/**
 * exit_err -prints error and exits with status 98
 * Return: exit status
 */
int exit_err(void)
{
	char error[] = "Error";
	int a;

	for (a = 0; error[a] != '\0'; a++)
		_putchar(error[a]);
	_putchar('\n');
	exit(98);
}

/**
 * dig_check - checks argv for non int values
 * @argv: pointer to argument vectors
 * Return: 1 if not digit else 0
 */
int dig_check(char **argv)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
				return (1);
		}
	}
	return (0);
}


#endif /* MAIN_H */
