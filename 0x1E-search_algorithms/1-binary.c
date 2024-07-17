#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
 * binary_search - Searches for a value in an array of integers using
 *                 the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value) {
	size_t l = 0, r = size - 1;
	size_t mid, i;

	while (l <= r)
	{
		/*Print the current searching range*/
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = (l + r) / 2;
		if (value == array[mid])
		{
			return mid;
		}
		else if (value < array[mid])
		{
			if (mid == 0)
			{
				break; /*Prevents underflow in case mid is 0*/
			}
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return -1;
}
