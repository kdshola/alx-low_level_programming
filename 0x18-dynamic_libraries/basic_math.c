/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of of a / b
 */
int div(int a, int b)
{
	if (b)
		return (a / b);
	return (0);
}

/**
 * mod - finds the modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a % b
 */
int mod(int a, int b)
{
	if (b)
		return (a % b);
	return (0);
}
