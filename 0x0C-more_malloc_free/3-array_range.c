#include <stdlib.h>
#include "main.h"


/**
 * array_range - creates an array
 *
 * @min: function parameter
 *
 * @max: function parameter
 *
 * Return: pointer
 */

int *array_range(int min, int max)

{
	int *p;
	int j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		p[j] = min++;

	return (p);
}
