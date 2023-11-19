#include <stdio.h>
#include <stdlib.h>
#include "list_t.h"

/**
 * print_list - prints all element of a list
 * @h: pointer to the first node
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
	printf("[0] (nil\n");

	return (0);

	}


	while (h != NULL)
	{
	printf("[%d] %s\n", h->len, h->str);
	count++;

	h = h->next;

	}
	printf("-> %lu elements\n", count);
	return (count);
}
