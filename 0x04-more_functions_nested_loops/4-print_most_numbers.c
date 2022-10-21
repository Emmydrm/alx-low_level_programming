#include "main.h"

/**
 * print_most_numbers - print the number 0 to 9
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
