#include <main.h>

/**
 * __memset - fill a block of memory with special values
 * @s: Starting addres of memory
 * @b: the desired values
 * @n: number of bytes to the change
 *
 * Return: Changed arrey
 */
char *_memset(char *s, char b, unsigned int n)
{
	 int i = 0;

	 for (; n > 0; i++)
	 {
		 s[i] = b;
		 n--;
	 }
	 return (s);
}
