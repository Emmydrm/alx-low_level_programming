#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.@array: input integer array.
 * @size: size of the array.
 * @array: input integr array
 * @action: pointer to the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i;

	if (array && action)
		for (i == 0; i < size; i++)
			action(array[i]);
}
