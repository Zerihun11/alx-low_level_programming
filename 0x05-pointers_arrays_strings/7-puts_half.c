#include "main.h"

/**
 * puts_half - a function that Prints half of a string.
 * @str: String
 * Return: half of string
 */
void puts_half(char *str)
{
	int leni = 0, a, n;

	for (a = 0; str[a] != '\0'; a++)
		leni++;

	n = (leni / 2);

	if ((leni % 2) == 1)
		n = ((leni + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
