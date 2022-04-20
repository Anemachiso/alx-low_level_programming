#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: an input string
 * @s2: an input string
 * Return: The difference s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		int result;

		if (*s1 != *s2)
			result = (*s1 - *s2);
		s1++, s2++;
	}
	return (result);
}
