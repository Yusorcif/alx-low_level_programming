#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array
 * @array: array
 * @size: number of array
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int j;

	if (!array || !action)
	return;

	for (j = 0; j < size; j++)
	{
	action(array[j]);
	}
}
