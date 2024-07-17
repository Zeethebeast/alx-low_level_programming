#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * linear_search - linear search function
 * @array: array parameter
 * @size: size parameter
 * @value: value parameter
 * Return: 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
