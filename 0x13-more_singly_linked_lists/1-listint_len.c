#include "lists.h"

/**
 * listint_len - returns the lenth of a list;
 * @h: pointer to the head of a list.
 *
 * Return: Length (INT) of a list.
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
