#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of string to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* declear varaible */
	unsigned int i;

	/* iterate through src till n number of charcters and copy to dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
