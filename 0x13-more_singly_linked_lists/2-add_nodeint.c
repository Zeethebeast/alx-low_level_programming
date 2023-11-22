#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node to the beginning
 * @head: head pointer
 * @n: int data type
 * Return: address of a new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
	return (NULL);
	}
		temp->n = n;
		temp->next = *head;
		*head = temp;

	return (temp);
}
