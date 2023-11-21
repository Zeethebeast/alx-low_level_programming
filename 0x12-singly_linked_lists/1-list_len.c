#include "lists.h"
#include <stdio.h>
/**
 * list_len - writes a function that returns a number of element
 * @h: pointer to the link
 * Return: nunber of elements
 */
size_t list_len(const list_t *h)
{
	size_t counting = 0;
	const list_t *newNode = h;

	while (newNode != 0)
	{
	counting++;
	newNode = newNode->next;
	}
	return (counting);
}

