#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: function parameter of size of array
 * @c: function parameter
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *x;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		x[j] = c;
	}
	return (x);
}
