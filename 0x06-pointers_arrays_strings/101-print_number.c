#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * Return: nothing
 */

void my_putchar(long n) 
{
	if (n < 0) 
	{
		putchar('-');
		n = n * -1;
	}
	if (n == 0)
		putchar('0');
	if (n / 10)
		my_putchar(n / 10);
	putchar(n % 10 + '0');
}
