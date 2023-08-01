#include "list.h"

/**
 * sum_listint - calculetes the sum of all data(n) of the listint_t
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum - 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

return (sum);
}
