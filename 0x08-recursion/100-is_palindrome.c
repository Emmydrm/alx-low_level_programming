#include "main.h"

/**
 * _strlen_recursion - size
 * @s: string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: string
 * @len: position
 * Return: boolena
 */
int p1(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}
	if (*s == *(s + (len - 1)))
	{
		return (p1(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - checks if a number if a palindrome
 * @s: string
 * Return: 1 if s is a palindrome
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len));
}
