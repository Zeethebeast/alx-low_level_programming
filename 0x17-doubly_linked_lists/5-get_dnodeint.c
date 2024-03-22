#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node a particular index of d_list
 *
 * @head: pointer to the head of the node
 * @index: the index to retrieve its node
 *
 * Return: pointer to the node index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t itre = 0;

	for (itre = 0; itre < index; itre++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);

}
