#include "main.h"

/**
 * print_triangle - print a triangle at a give size.
 * @size : size of triangle to print.
 *
 *
 */
void print_triangle(int size)
{
	int row, i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1;  row <= size; row++)
		{
			for (j = size - row; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (i = 1; i <= row; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
