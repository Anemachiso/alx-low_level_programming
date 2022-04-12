#include <unistd.h>

/**
 * _putchar - writes th character i to stdout
 * @i: the character to print
 *
 * Return: on success 0.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
