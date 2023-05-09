#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: A pointer to the first element of the array to print
 * @size: The size of the array
 */
void print_array(int *array, size_t size)
{
	printf("Searching in array: %d", array[0]);
	for (size_t i = 1; i < size; i++)
		printf(", %d", array[i]);
	printf("\n");
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if it is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	print_array(array, size);

	if (size == 1)
		return (array[0] == value ? 0 : -1);

	size_t mid = (size - 1) / 2;
	if (array[mid] == value) {
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		return (mid);
	}
	else if (array[mid] < value)
		return (advanced_binary(array + mid + 1, size - mid - 1, value) + mid + 1);
	else
		return (advanced_binary(array, mid + 1, value));
}
