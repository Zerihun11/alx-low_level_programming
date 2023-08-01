#include "list.h"

/**
 * pop_listint - deletes the head node of a line l
 * @head: pointer to the first element in the link list
 * or 0 for empty list
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return;
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
