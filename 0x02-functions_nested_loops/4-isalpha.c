#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: char to check
 * Return: 1 if c is an alphabet otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
