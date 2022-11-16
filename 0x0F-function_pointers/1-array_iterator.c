#include "function_pointers.h"

/**
 * array_iterator - exxecute a function give as a
 * paramater on each element of an array
 * @array: input integer array
 * @size: size of the RRy
 * @action: pointer to the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
