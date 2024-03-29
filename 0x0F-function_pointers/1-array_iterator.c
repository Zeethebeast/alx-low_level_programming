#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates through the elements of an array
 * @size: size of the array
 * @array: target array
 * @action: function pointer to array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	action(*array);
	array++;

}
