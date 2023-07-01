#include "main.h"

/**
 * print_line - prints a line to a given lenght.
 * @n: length of the line.
 *
 *
 */
void print_line(int n)
{
	int line1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line1 = 1; line1 <= n; line1++)
		{
			_putchar('_');
		}
		 _putchar('\n');
	}
}
