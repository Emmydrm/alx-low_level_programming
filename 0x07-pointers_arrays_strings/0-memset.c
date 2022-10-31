#include "main.h"

/**
 * _memset - files the first n bytes of the memory area
 *          pointed to by @s with the constant bye @c.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* declear variables, i to count n, j to index s */
	unsigned int i;
	int j;

	j = 0;

	for (i = 0; i < n; i++)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
