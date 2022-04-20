#include  "main.h"

/**
 * infinite_add - A function to print the sum of two integers.
 *@n1: An inpute integer
 *@n2: An inpute integer
 *@r: inpute buffer
 *@s: inpute buffer size
 */

char *infinite_add(char *n1, char *n2, char *r, int s)
{
	int d;

	int i = n - 1, j = m - 1, k = s, c = 0;

	while (j >= 0) 
	{
		d = n1[i] + n2[j] + c;
		r[k] = (d % 10);
		c = d / 10;
		k--;
		i--;
		j--;
	}
	while (i >= 0) 
	{
		d = n1[i] + c;
		r[k] = (d % 10);
		c = d / 10;
		i--;
		k--;
	}
	return (r);
}
