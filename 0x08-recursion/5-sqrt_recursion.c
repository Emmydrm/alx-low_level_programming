#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @n: integer
 * @i: integer
 * Return: evaluate sqr
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);

	return (-1);
}

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: number
 * Return: square root of a n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}
