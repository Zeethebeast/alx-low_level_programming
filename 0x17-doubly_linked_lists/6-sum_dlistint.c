#include "lists.h"
/**
 * sum_dlistint - sum the total number of data n in a list
 *
 * @head: the pointer to the head of the list
 *
 * Return: total number of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
