#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free linked list
 * @head: listint_t list to be free
 * Return: succes
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
