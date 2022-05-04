#include "main.h"
#include <stdlib.h>

/**
 * _count - count
 * @s input pointer
 * return: int
*/

int _count(char *s)
{
	int count = 0, i = 0;
	
	while (*(s + i))
	{
		if (*(s + i) != ' ')
			if (*(s + i + 1) == ' ' || *(s + i + 1) == 0)
				count += 1;
		i++;
	}
	return (count)
}

/**
 * strtow - char
 * @str: pointer to string params
 * Return: char
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	int len = 0, count = 0;
	char **f, *col;

	if (!str || !*str)
		return (NULL);
	if (_count(char *s) == 0)
	{
		return (NULL);
	}
	_count(char *s) += 1;
	f = malloc(sizeof(char *) * _count(char *s);

	if (!f)
		return (NULL);
	i = 0;

	while (*str)
	{
		while (*str == ' ' && *str)
			str++;
		len = 0;

		while (*(str + len) != ' ' && *(str + len))
			len += 1;
		len += 1;
		col = malloc(sizeof(char) * len);

		if (!col)
		{
			for (k = j - 1; k >= 0; k--)
				free(f[k]);
			free(f);
			return (NULL);
		}
		for (k = 0; k < (len - 1);  k++)
			*(col + k) = *(str++);
		*(col + k) = '\0';
		*(f + j) = col;

		if (j < (count - 1))
			j++;
	}
	*(f + j) = NULL;
	return (f);
}
