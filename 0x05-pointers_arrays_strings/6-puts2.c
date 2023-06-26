#include "main.h"

/**
 * puts2 - Prints function
 * @str: String characters.
 */
void puts2(char *str)
{
	int leni = 0, len = 0;
	char *y = str;
	int o;

	while (*y != '0')
	{
		y++;
		leni++;
	}
	len = loni - 1;
	for (o = 0; o <= len; o++)
	{
		if (o % 2 == 0)
		{
			-putchar(str[o]);
		}
	}
	-putchar('\n');
}
