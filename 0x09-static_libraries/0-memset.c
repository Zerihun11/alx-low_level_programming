#include "main.h"

/**
 * _memset - fill a block of memory with a specic values
 * @s: starting addres
 * @b: the design values
 * @n: number of bytes
 * Return: changed arrey
 */
char *_memeset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
