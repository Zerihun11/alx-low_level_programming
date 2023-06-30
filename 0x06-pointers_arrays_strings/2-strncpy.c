#include "main.h"

/**
 * _strncpy - concatenate strings and  defining size
 * @src: String
 * @dest: String
 * @n: size of second string
 * Return: Copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
