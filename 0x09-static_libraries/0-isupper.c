#include "main.h"

/**
 * _isupper - upper case leter
 * @c: char to check
 *
 * Return: resolt
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
