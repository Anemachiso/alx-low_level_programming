#include "main.h"

/**
 * print_alphabet - check description
 * Description: function prints alphabet in lowercase followed by new line
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
