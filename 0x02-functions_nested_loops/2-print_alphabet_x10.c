#include "main.h"

/**
 * print_alphabet_x10 - check main.
 * Description: function uses _putchar function to print alphabets 
 * in lowercase 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
