#include "main.h"

/**
 * _strstr - locates a substring
 * @heystack: string
 * @needle: substring
 * Return: heystack if substring in heystack, else 0
 */
char *_strstr(char *heystack, char *needle)
{
	char *str1, *str2;

	while (*heystack != '\0')
	{
		str1 = heystack;
		str2 = needle;

		while (*str2 != '\0' && *heystack == *str2)
		{
			heystack++;
			str2++;
		}

		if (*str2 == '\0')
		{
			return (str1);
		}
		heystack = str1 + 1;
	}
	return (0);
}
