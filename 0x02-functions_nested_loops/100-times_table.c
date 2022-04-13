#include "main.h"

/**
* print_times_table - check main
* @n: An integer to be inter.
* Description: It prints 9 times table starting with 0.
* Return: nothing.
*/
void print_times_table(int n)
{
	int i, j;
	long int p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;

				if ((p / 10) == 0)
				{
					if (j != 0)
						_putchar(' ');
					_putchar(p + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				else
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
