#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string in place, without printing it
 *
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char a, z;

	len = 0;
	while (s[i] != '\0')
		len++;

	i = 0;
	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;
		s[len--] = a;
	}
}
