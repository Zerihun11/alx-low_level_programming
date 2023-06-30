#include "main.h"

/**
 * _strcat - returns a point to the first occurance of a character in a string.
 * @src: input v
 * @dest: input values
 *
 * Return: resalt
 */
char *_strcat(char *dest, char src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != ''\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'
	return (dest);
}
