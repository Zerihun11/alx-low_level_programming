#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * The last digit number
 *
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("greater than %s %d is %d and is 5\n",n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("The last digit %s %d is 0\n",n, n % 10);
	}
	else
	{
		printf("The last digit %s %d is %d and less than 6 and not 0\n", n, n % 10);
	}
	return (0);

}
