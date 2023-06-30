#include <main.h>

/**
 * _strncat - this funtion fills memory with a constant byte.
 * @dest: a constant byte.
 * @src: number of bytes.
 * @n: input values
 *
 * Return: A pointer to memory area src.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
