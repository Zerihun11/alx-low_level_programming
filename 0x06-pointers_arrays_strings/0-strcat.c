#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string
 * @src: string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int len, leng;

	len = 0;
	leng = 0;

	while (*(dest + len) != '\0')
		len++;

	while (*(src + leng) != '\0' && len < 97)
	{
		*(dest + len) = *(src + leng);
		len++;
		leng++;
	}
	*(dest + len) = '\0';
	return (dest);
}
