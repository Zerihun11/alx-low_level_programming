#include "main.h"
#include <stdio.h>

/**
 * set_string - set the value of a pointer to char
 * @s: pointer to pointer
 * @to: pointer char
 * Return: Always 0 (succes)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
