#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 *
 * @str: function parameter
 *
 * Return: 0
 */

char *_strdup(char *str)

{
	int a = 0, j = 1;
	char *x;

	if (str == NULL)
		return (NULL);
	while (str[j])
	{
	j++;
	}
	x = malloc((sizeof(char) * j) + 1);
	if (x == NULL)
		return (NULL);
	while (a < j)
	{
		x[a] = str[a];
			a++;
	}
	x[a] = '\0';
	return (x);
}
