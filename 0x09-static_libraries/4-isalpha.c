#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: The character to be checked
 * Return: Always 0 (Succes)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
