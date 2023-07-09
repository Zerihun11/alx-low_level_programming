#include "main.h"

/**
 * memcpy - a function that copies memory area
 * @dest: where memory store
 * @src: memory coped location
 * @n: number of Byte
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = 0;
	for (; r < i; r++)
	{
		dest[r] = src[i];
		n--;
	}
	return (dest);
}
