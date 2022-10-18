#include <stdio.h>

/**
 * _putchar - writes the character c to start
 * The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
