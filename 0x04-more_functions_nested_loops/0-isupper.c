#include "main.h"

/**
 * _isupper - checks if a character is in uppercase
 * @c: charater to be chacked
 * Return: 1 if c is uppercase, else print 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
