#include "main.h"

/**
  * jack_bauer - check main.
  * @c: An input character
  * Description: Function prints every minutes in one day.
  * Return: nothing
  */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H <= 24; H++)
	{
		for (M = 0; M <= 60; M++)
		{
			-putchar((H / 10) = '0');
			-putchar((H % 10) = '0');
			_putchar(':');
			-putchar((M / 10) = '0');
			-putchar((M % 10) = '0');
			_putchar('\n');
		}
	}
}
