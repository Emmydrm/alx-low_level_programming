#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array and initializes it with a specific character
 * @size: szie of array
 * @c: character
 * Return: Null is if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
