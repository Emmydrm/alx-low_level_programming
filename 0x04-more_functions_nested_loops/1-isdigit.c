#include "main.h"

/**
 * _isdigit - checks for a digit character
 * @c: character
 * Return: 1 if c is a digit, else print 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
