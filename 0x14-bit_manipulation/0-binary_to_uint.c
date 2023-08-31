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

	for (int i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			result += pow(2, len - i - 1);
		}
		else if (b[i] != '0')
			return (0);
	}

	return (result);
}
