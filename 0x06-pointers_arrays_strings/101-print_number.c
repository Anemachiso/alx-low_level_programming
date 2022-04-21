#include "main.h"

/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0) 
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
		 _putchar(n1 / 10);
	_putchar((n1 % 10) + '0');
}
