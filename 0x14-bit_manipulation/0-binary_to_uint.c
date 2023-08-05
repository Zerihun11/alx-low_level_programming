#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that convert a binary number to an unsigned int
 * @b: string to convert.
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (i = 1, num = 0, len--; len >= 0; len--, i *= 2)
	{
		if (b[len] == '1')
			num += i;
	}

	return (num);
}
