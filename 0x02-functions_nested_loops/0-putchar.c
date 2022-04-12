#include <unistd.h>
#include "main.h"

/**
 * main - check description
 * description: It prints the word _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(word[c]);
	_putchar('\n');

	return (0);
}
