#include "main.h"

/**
 * more_numbers - prints 0 to 14 on one line ten times.
 *
 */
void more_numbers(void)
{
	int n, row, i, j;

	for (row = 1; row <= 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			i = n / 10;
			j = n % 10;
			if (n > 9)
				_putchar(i + '0');

			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
