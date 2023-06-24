#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = Z ; n >= 'A' ; n--)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
