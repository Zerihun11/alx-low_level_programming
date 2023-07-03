#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return ((s + i));
		}
		i++;
	}
	return (NULL);
}
