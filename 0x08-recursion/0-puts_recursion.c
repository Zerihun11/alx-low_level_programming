#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -  print a tring
 * @s: input
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recurion(s + 1);
}

