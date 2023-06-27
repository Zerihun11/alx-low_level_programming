#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 * return: 0
 */
void print_rev(char *s)
{
	int x = 0;
	int y, len;

	while (s[x] != '\0')
	{
		x++;
	}

	len = x;

	for (y = len - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}
