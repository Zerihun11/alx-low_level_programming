#include "main.h"

/**
 * leet - change vowels to numbers.
 * @n: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *n)
{
	int i, j;
	char y1[] = "aAeEoOtTlL";
	char y2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == y1[j])
			{
				n[i] = y2[j];
			}
		}
	}
	return (n);
}
