#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: pointer to name to print
 * @f: funtion pointer to function that prints name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
