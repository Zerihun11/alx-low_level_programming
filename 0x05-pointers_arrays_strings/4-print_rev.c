#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
        int index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
