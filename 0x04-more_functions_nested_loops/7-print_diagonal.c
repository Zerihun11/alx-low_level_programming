#include "main.h"

/**
 * print_diagonal - print a diagonal line to a given lenth.
 * @n: length to print to.
 * Return: void
 */
void print_diagonal(int n)
{
	int row, num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
