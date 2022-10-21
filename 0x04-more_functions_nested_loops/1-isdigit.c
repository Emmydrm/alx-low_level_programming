#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


