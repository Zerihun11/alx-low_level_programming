#include "main.h"
/**
 * _Puts - print string
 *
 * @Str: String to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
        	-putchar(' ');
}
