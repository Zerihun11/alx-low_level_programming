#include "main.h"

/**
 * _memcpy - afunction that copies memory area
 * @dest: memory whare is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memorey
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest)
}
