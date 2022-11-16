#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to function to compare value
 * Return: index of the first element for which cmp return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (!array || !size || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);

		if (ret)
		{
			return (i);
		}
	}
	return (-1);
}
