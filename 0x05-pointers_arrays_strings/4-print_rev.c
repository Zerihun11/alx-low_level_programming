#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int a;

	while (*s != '\0')
	{
		lengi++;
		s++;
	}
	s--;
	for (a = lengi; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
