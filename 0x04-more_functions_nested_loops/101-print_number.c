#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		int m = n, i = 1000000000;

		for (; i >= 1; i /= 10)
			if (m / i != 0)
			{
				if (n < 0)
				{
					_putchar('-');
					_putchar((m / i) % 10 + '0');
				}
				else
					 _putchar((m / i) % 10 + '0');
			}
	}
}
