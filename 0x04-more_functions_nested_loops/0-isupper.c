#include "holberton.h"

/**
 * _isupper 
 * @c: Character to be tested
 *
 * Return: 1 for  uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
