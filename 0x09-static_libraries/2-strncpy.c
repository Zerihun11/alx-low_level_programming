#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input valuess
 * @src: input values
 * @n: input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < 0)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
