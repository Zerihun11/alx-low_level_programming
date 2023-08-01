#include "list.h"

/**
 * get_nodeint_at_index - returns the node at a certaine indext in a linked lisst
 * @head: first node
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, .
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}