#include "main.h"
/**
 * _strncat - concatenate strings, defining the size.
 * @dest: string con
 * @src: string to be con
 * @n: size of string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, leng;

	len = 0;
	leng = 0;

	while (*(dest + len) != '\0')
		len++;

	while (*(src + leng) != '\0' && len < 97 && leng < n)
	{
		*(dest + len) = *(src + leng);
		len++;
		leng++;
	}
	*(dest + len) = '\0';
	return (dest);
}
