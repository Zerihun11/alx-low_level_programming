#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	char *m = "main\n";

	while (*m)
	{
		_putchar(*m);
         	m++;
	}
	return (0);
}
