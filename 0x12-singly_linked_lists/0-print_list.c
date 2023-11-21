#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all element of a list
 * @h: pointer to the first node
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");

		else
		 printf("[%d] %s\n", h->len, h->str);
	/**printf("-> %lu elements\n", count);**/

	h = h->next;
	count++;
	}
	return (count);
}
