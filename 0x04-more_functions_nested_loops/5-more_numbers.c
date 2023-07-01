#include "main.h"

/**
 * more_numbers - prints 0 to 14 on one line ten times.
 *
 */
void more_numbers(void)
{
	int number, i, j, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			i = number / 10;
			j = number % 10;
			if (number > 9)
				_putchar(i + '0');

			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
