#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head pointer
 * @n: data
 * Return: returns address of the element or NULL if empty
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *lastnode = *head;

	newnode->n = n;
	newnode->next = NULL;



	if (*head == NULL)
	{
		*head = newnode;
	return (NULL);
	}
	while (lastnode->next != NULL)
	lastnode = lastnode->next;
	lastnode->next = newnode;

	return (newnode);
}
