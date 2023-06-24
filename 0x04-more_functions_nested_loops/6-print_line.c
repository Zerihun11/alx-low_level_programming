#include "holberton.h"

/**
 * print_line - prints a line to a given lenght.
 * @n: length of the line.
 *
 * return v
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
        }
	_putchar('\n');
}
