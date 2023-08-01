#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of element 
 * @h: linked list ot type listint_t to traverse
 *
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
