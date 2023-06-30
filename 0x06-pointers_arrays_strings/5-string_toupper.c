#include "main.h"

/**
 * reverse_array - reverse_array
 * @a: Array
 * @n: number of elements of array.
 *
 * Return: void
 */
char *string_toupper(char *n)
{
         int i;

         i = 0;
         while (n[i] != '\0')
         {
                 if (n[i] >= 'a' && n[i] <= 'z')
                         n[i] = n[i] - 32;
                 i++;
         }
         return (n);
}
