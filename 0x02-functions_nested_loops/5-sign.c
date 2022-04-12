#include "main.h"

/**
  * print_sign - check main.
  * @n: An input character
  * Description: Function prints the sign of the number
  * Return: 1 if number is positive, 0 if number is zero,
  * -1 if number is negative.
  */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}

	else
	{
		test = -1;
		_putchar('-');
	}

	return (test);
}
