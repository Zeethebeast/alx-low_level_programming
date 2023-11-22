#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements
 * @h: header pointer to the next node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *newnode = h;

	while (newnode != 0)
	{
	newnode = newnode->next;
	count++;
	}
	return (count);
}
