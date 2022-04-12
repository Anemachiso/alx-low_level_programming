#include "main.h"

/**
  * print_last_digit - check main.
  * @c: An input character
  * Description: Function print the last digit of a number
  * Return: print last digit of number r.
  */
int print_last_digit(int)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);

	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n);
}
