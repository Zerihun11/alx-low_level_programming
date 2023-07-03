#include <main.h>

/**
 * _memset - this funtion fills memory with a constant byte
 * @s: Starting addres of memory
 * @b: the desired values
 * @n: number of bytes to the change
 *
 * Return: Changed arrey
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
