#include "lists.h"

void befmain(void) __attribute__((constructor));

/**
 * befmain - prints specific message before main function
 * executed before main
 * Return: void
 */

void befmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
