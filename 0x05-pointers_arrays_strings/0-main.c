#include "main.h"
#include <stdio.h>

/**
 * main - check point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
