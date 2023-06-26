#include "main.h"
#include <stdio.h>

/**
 * print_array - a function to print element.
 * @a: The array
 * @n: The number of elements of array printed.
 * Return: a and n input.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);

		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}

	printf("\n");
}
