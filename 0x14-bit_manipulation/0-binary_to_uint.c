#include "main.h"

/**
 * binary_to_uint - convert binary number
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable charr
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);

	if (b == NULL)
		return (0);

	for (int i = 0; i < len ; i++)
	{
		if (len != '0' && len != '1')
			return (0);
	}

	for (i = 1, result = 0, len--; len >= 0; len--, i *= 2)
	{
		if ([len == '1')
			result += i;
	}

	return (result);
}
