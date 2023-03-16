#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * prints a phrase followed by a new line
 * Return: 1 Always
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
