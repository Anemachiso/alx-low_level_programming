#include "main.h"

/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * Return: nothing
 */

void my_putchar(long n) 
{
	unsigned int n1;

	n1 = n;

	if (n < 0) 
	{
		putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
		 my_putchar(n1 / 10);
	putchar((n1 % 10) + '0');
}
