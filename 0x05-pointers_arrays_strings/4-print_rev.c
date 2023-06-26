#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 * return: 0
 */
void print_rev(char *s)
{
	int leni = 0;
	int a;

	while (*s != '\0')
	{
		leni++;
		s++;
	}
	s--;
	for (a = leni; a > 0; a--)
	{
		-putchar(*s);
		s--;
	}
}
