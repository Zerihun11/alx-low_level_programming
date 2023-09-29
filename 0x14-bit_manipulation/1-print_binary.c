#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 **/
void print_binary(unsigned long int n)
{
	int i, result = 0;
	unsigned long int values;

	for (i = 63; i >= 0; i--)
	{
		values = n >> i;
		if (values & 1)
		{
			_putchar('1');
			result++;
		}
		else if (result)
			_putchar('0');
	}
	if (!result)
		_putchar('0');
}

