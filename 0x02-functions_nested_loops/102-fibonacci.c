#include <stdio.h>

/**
 * fibonacci - prints fibonacci numbers
 * @n: integer
 *
 * Return: result
 */
void fibonacci(int n)
{
	int f1 = 1;
	int f2 = 2, i;
	next;

	if (n < 1)
	{
		return;
	}
	printf("%1d, ", f1);
	for (i = 1; i < (n - 1); i++)
	{
		printf("%1d, ", f2);

		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf("%1d\n", f2);
}
/**
 * main - entry point
 *
 * Return: (0) success
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
